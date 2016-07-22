/******************************************************************************
 * Filename:	threadUART.c
 */
//==============================================================================
// @ Include
//==============================================================================

#include "scpiMain.h"
#include "scpiID.h"

#include "../../includes.h"
#include "../../keydef.h"

//#include "pflags.h"
//#include "gwPF.h"
//#include "../menu/data/dataMenu.h"
//#include "../scpi/scpiSpecProc.h"
#include "../scpi/tty/apiTty.h"
//#include "../menu/api/apiTdkUART.h"
#include "parser/scpi/threadUART.h"


extern void AlarmProcess(UBYTE key);



STR_INTF intf_UART;
STR_PARSER_COMD comd_UART;
STR_PARSER_PARAM param_UART;
STR_PARSER_DATA	data_UART;//save data of parameter.
UBYTE Trg_wait_flag=0;

STR_PARSER parser_UART = {
	.countQuery = 0,
	.pInterface=(STR_INTF *) (&intf_UART),
	.pComd  =(STR_PARSER_COMD  *) (&comd_UART),
	.pParam =(STR_PARSER_PARAM *) (&param_UART),
	.pData  =(STR_PARSER_DATA *) (&data_UART),
	.init = init_TtyUART,
	.open = open_TtyUART,
	.write= write_TtyUART,
	.read = read_TtyUART,
	.ctrl = ctrl_TtyUART,
	.close= close_TtyUART,
	.release=release_TtyUART
};

typedef union _REGISTER_QUES_STATUS { //QUSE
	unsigned short data;
	struct {
		unsigned short otp		:1; //bit0 0x01
		unsigned short rvp		:1; //bit1 0x02
		unsigned short ovp		:1; //bit2 0x04
		unsigned short uvp		:1; //bit3 0x08

		unsigned short para		:1; //bit4 0x10
		unsigned short opp		:1; //bit5 0x20
		unsigned short ocp		:1; //bit6 0x40
		unsigned short cpp		:1; //bit7 0x80

		unsigned short rocp		:1; //bit8
		unsigned short fccp		:1; //bit9
		unsigned short unreg	:1; //bit10
		unsigned short ext		:1; //bit11

		unsigned short bit12	:1; //bit12
		unsigned short bit13	:1; //bit13
		unsigned short bit14	:1; //bit14
		unsigned short bit15	:1; //bit15
	};
} REG_QUES_STATUS;


void updateScpiStatus(void)
{
	unsigned char dat;
	REG_OPERATION_STATUS oper_cond;
	REG_QUESTIONABLE_STATUS ques_cond;
	REG_CSUMMARY_STATUS csum_cond;
	REG_QUES_STATUS Q;

	//--- Operation Status ---
	oper_cond.data= 0;
	oper_cond.cal = (M_num == P_CAL_MODE)? 1:0;
	oper_cond.wtg = Trg_wait_flag;

	//--- Questionable Status ---
	Q.data = RecoderAlarmStatus;
	ques_cond.data= 0;
	ques_cond.ov  = Q.ovp;
	ques_cond.oc  = Q.ocp;
	ques_cond.op = Q.opp;
	ques_cond.ot  = Q.otp;
	ques_cond.uvp = Q.uvp;
	ques_cond.ext = Q.ext;
	ques_cond.rvp = Q.rvp;

	//--- CSUM Status ---
	csum_cond.data=0;
	if(P3k_Disp_Data.Load_Type == SCPI_Load) {
		dat = P3k_Disp_Data.CURRMODE;
		csum_cond.cc = (dat == P_CC)? 1:0;
		csum_cond.cr = (dat == P_CR)? 1:0;
		csum_cond.cv = (dat == P_CV)? 1:0;
		csum_cond.cp = (dat == P_CP)? 1:0;
		csum_cond.prun = 0;
	} else {
		csum_cond.cc = 0;
		csum_cond.cr = 0;
		csum_cond.cv = 0;
		csum_cond.cp = 0;
		if((M_num == P_PROG_EXECUTE)||(M_num == P_NSeq_EXECUTE)||(M_num == P_FSeq_EXECUTE)) {
			csum_cond.prun = 1;
		} else {
			csum_cond.prun = 0;
		}
	}
	intfSCPI_SetOperReg((STR_INTF *) &intf_UART, _INTF_REG_COND, (int)oper_cond.data);
	intfSCPI_SetQuesReg((STR_INTF *) &intf_UART, _INTF_REG_COND, (int)ques_cond.data);
	intfSCPI_SetCsumReg((STR_INTF *) &intf_UART, _INTF_REG_COND, (int)csum_cond.data);
}


void thread_Parser_Driver(char initial_falg)
{
	static char count=1;
	STR_PARSER *p;
	char i;
	p = (STR_PARSER *) (&parser_UART);
	if(initial_falg) { //initial SCPI parser
		intf_Initial(&intf_UART);
		p->pInterface->status.active=1;
		(p->init)();
		scpiInitParser((STR_PARSER_COMD *) (p->pComd));
		scpi_InitErrorQueue(p);
		p->pComd->pNow = (NODES)&_nodeRoot;
		(p->open)();
		(p->ctrl)(_GW_IOCTL_SET_ADDRESS, 0);
		Parserfalg = 0;
	}
	scpiParser(p);
	if(DGIOCtrlFlag&REM_Mode_Fast){
		AlarmProcess(0);
#if Enable_RemoteFast
		if(count>=25)	count=0;
#else
		if(count>=8)		count=0;
#endif
	}else{
		if(count>=3)		count=0;
	}
	
	if(count==0){
		updateScpiStatus();
		count =1;
	}else if(count==1){
		scpi_StatusUpdate(p);
		count = 2;
	}else{
		count++;
	}
}


