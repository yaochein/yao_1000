#include <app.h>
#include "../menu/head.h"
#include "keydef.h"
#include "../FPGA/SendTXSub.h"
#include "Display.h"
#include "../parser/scpi/scpiStruct.h"



extern struct tm CurrentTime;
extern void ShowSpace_LEFT(char no, int x, int y);

void DrawTime(void)
{
	char str[24];
	char Month[10];

 	GUI_SetBkColor(Upper_Bottom_Bolor);
	GUI_SetColor(Command_message_Font_Bolor);
   	GUI_SetTextAlign(GUI_TA_CENTER);

	switch(CurrentTime.tm_mon)
	{
		case Jan:
			sprintf( Month, "Jan");
			break;
		case Feb:
			sprintf( Month, "Feb");
			break;
		case Mar:
			sprintf( Month, "Mar");
			break;
		case Apr:
			sprintf( Month, "Apr");
			break;
		case May:
			sprintf( Month, "May");
			break;
		case Jun:
			sprintf( Month, "Jun");
			break;	
		case Jul:
			sprintf( Month, "Jul");
			break;	
		case Aug:
			sprintf( Month, "Aug");
			break;	
		case Sep:
			sprintf( Month, "Sep");
			break;	
		case Oct:
			sprintf( Month, "Oct");
			break;	
		case Nov:
			sprintf( Month, "Nov");
			break;	
		case Dec:
			sprintf( Month, "Dec");
			break;				
		default:
			break;

	}

	sprintf(str, "%02d/%s/%04d",  CurrentTime.tm_mday, Month, CurrentTime.tm_year);
	GUI_DispStringAt(str, 38, 0);	
}

#define System_Message_1_x_Address			73
#define System_Message_2_x_Address			107
#define System_Message_3_x_Address			140
#define System_Message_4_x_Address			182
#define System_Message_5_x_Address			232
#define System_Message_6_x_Address			280

#define System_Message_Up_y_Address			0
#define System_Message_Down_y_Address		18

void ShowRemLocFunc(void)
{
	if( REM_CONT )
	{
		GUI_SetBkColor(Command_message_Bottom_Bolor);
		GUI_SetColor(Command_message_Font_Bolor);
		GUI_SetTextAlign(GUI_TA_LEFT);
		GUI_DispStringAt( " REM ", System_Message_1_x_Address, System_Message_Up_y_Address );
	}
	else
	{
		GUI_SetBkColor(Upper_Bottom_Bolor);
		ShowSpace_LEFT( 5, System_Message_1_x_Address, System_Message_Up_y_Address);
	}
}

void ShowErrorFunc(void)
{
	//extern char ErrEventQueueCtr;
	extern STR_PARSER parser_UART;

	if( parser_UART.errQueue.cnt )
	{
		GUI_SetBkColor(Alarm_message_Bottom_Bolor);
		GUI_SetColor(Command_message_Font_Bolor);
		GUI_SetTextAlign(GUI_TA_LEFT);
		GUI_DispStringAt( " ERR ", System_Message_2_x_Address+1, System_Message_Up_y_Address );
	}
	else
	{
		GUI_SetBkColor(Upper_Bottom_Bolor);
		ShowSpace_LEFT( 5, System_Message_2_x_Address+1, System_Message_Up_y_Address);
	}
}

void ShowLOCKFunc(void)
{
	if(UTILITY.LOCK_KEY)
	{
		GUI_SetBkColor(Command_message_Bottom_Bolor);
		GUI_SetColor(Command_message_Font_Bolor);
		GUI_SetTextAlign(GUI_TA_LEFT);
		GUI_DispStringAt( " LOCK ", System_Message_3_x_Address+1, System_Message_Up_y_Address );
	}
	else
	{
		GUI_SetBkColor(Upper_Bottom_Bolor);
		ShowSpace_LEFT( 6, System_Message_3_x_Address+1, System_Message_Up_y_Address);
	}
}

void ShowSHORTFunc(void)
	{
	if(UTILITY.SHORT_CTL)
		{
		GUI_SetBkColor(Command_message_Bottom_Bolor);
		GUI_SetColor(Command_message_Font_Bolor);
		GUI_SetTextAlign(GUI_TA_LEFT);
		GUI_DispStringAt( " SHORT ", System_Message_4_x_Address+1, System_Message_Up_y_Address );
		}
	else
		{
		GUI_SetBkColor(Upper_Bottom_Bolor);
		ShowSpace_LEFT( 7, System_Message_4_x_Address+1, System_Message_Up_y_Address);
		}
	}

void ShowInterFaceFunc(void)
{
	char str[10];

	if(INTERFACE_RS232==UTILITY.INTERFACE)	
		sprintf( str, " RS232 ");
	else if(INTERFACE_GPIB ==UTILITY.INTERFACE)	
		sprintf( str, " GPIB%02d ",GPIBPAR.MYADDR);
	else if(INTERFACE_USB  ==UTILITY.INTERFACE)
		sprintf( str, " USB ");
	
	GUI_SetBkColor(Upper_Bottom_Bolor);
	ShowSpace_LEFT( 7, System_Message_5_x_Address+1, System_Message_Up_y_Address);

#if 1
	if(D_interface.INTERFACE==UTILITY.INTERFACE)
		GUI_SetBkColor(Command_message_Bottom_Bolor);
	else
		GUI_SetBkColor(Alarm_message_Bottom_Bolor);
#else
	GUI_SetBkColor(Command_message_Bottom_Bolor);
#endif

	GUI_SetColor(Command_message_Font_Bolor);
	GUI_SetTextAlign(GUI_TA_LEFT);
	GUI_DispStringAt( str, System_Message_5_x_Address+1, System_Message_Up_y_Address );
}

void ShowPROGFunc(void)
{
	char str[10];
	GUI_SetBkColor(Upper_Bottom_Bolor);
	ShowSpace_LEFT( 6, System_Message_6_x_Address, System_Message_Up_y_Address);

	if( UTILITY.LOAD_CTL||UTILITY.SHORT_CTL )	
		GUI_SetBkColor(MEM_ORANGE_ku);
	else									
		GUI_SetBkColor(Command_message_Bottom_Bolor);
	
	GUI_SetColor(Command_message_Font_Bolor);
	GUI_SetTextAlign(GUI_TA_LEFT);
	
	if(Prog_Load==P3k_Chan_Data.Load_Type)		
		sprintf( str, " PROG ");
	else if(NSeq_Load==P3k_Chan_Data.Load_Type)	
		sprintf( str, " NSEQ ");
	else if(FSeq_Load==P3k_Chan_Data.Load_Type)	
		sprintf( str, " FSEQ ");
#if Enable_OCP_function
	else if(OCP_Load==P3k_Chan_Data.Load_Type)
		sprintf( str, "  OCP  ");
#endif	
#if Enable_OPP_function
	else if(OPP_Load==P3k_Chan_Data.Load_Type)
		sprintf( str, " OPP ");
#endif	
#if Enable_Battery_Discharge	
	else if(BATT_Load==P3k_Chan_Data.Load_Type)
		sprintf( str, " BATT ");
#endif
#if Enable_LED_function
	else if(FLED_Load ==P3k_Chan_Data.Load_Type)
		sprintf( str, "  LED ");
	else if(CLED_Load ==P3k_Chan_Data.Load_Type)
		sprintf( str, " CLED ");
#endif

	else										
		sprintf( str, " LOAD ");
	GUI_DispStringAt( str, System_Message_6_x_Address, System_Message_Up_y_Address );

}

void DispUpperProcess(void)
{
	p3k_send_tx_list tx_data;
	char Command_Err_out[60];

	
	if( SysRedrawFlag & BG_CLEAR )
	{
		SysRedrawFlag &= (~BG_CLEAR);		
		ClearP3KSysBG(Upper_Bottom_Bolor); 
		DGIOCtrlFlag |= EXT_Frame_CONT_DISP;
		DMA_Update_Flag = 1;
	}
	//GUI_SetFont(&GUI_FontTimesNewRoman17);
	GUI_SetFont(Upper_Font); 
	
	/* Updata Time and Clock  */
	if( SysRedrawFlag & TIME_UPDATA )
	{
		SysRedrawFlag &= (~TIME_UPDATA);
#if 0 //2015_0609
		DrawTime();
#endif 		
		DMA_Update_Flag = 1;
	}	
	/* Updata Remote or Local Control */

	if( SysRedrawFlag & REM_LOC_UPDATA )
	{
		SysRedrawFlag &= (~REM_LOC_UPDATA);
		tx_data.ADDRH = Machine_Command;
		tx_data.ADDRL = 0x0C;
		SendTXData(&tx_data);
		ShowRemLocFunc();
		DMA_Update_Flag = 1;
	}

	if( SysRedrawFlag & ERROR_UPDATA )
	{
		SysRedrawFlag &= (~ERROR_UPDATA);
		ShowErrorFunc();
		DMA_Update_Flag = 1;
	}

	if( SysRedrawFlag & LOCK_UPDATA )
		{
		SysRedrawFlag &= (~LOCK_UPDATA);
		ShowLOCKFunc();
		DMA_Update_Flag = 1;
		}

	if( SysRedrawFlag & SHORT_UPDATA )
		{
		SysRedrawFlag &= (~SHORT_UPDATA);
		ShowSHORTFunc();
		DMA_Update_Flag = 1;
		}
	
	/* Updata Interface i.e. RS232, GPIB, USB */	
	if( SysRedrawFlag & Interface_UPDATA )
		{
		SysRedrawFlag &= (~Interface_UPDATA);
		ShowInterFaceFunc();
		DMA_Update_Flag = 1;
		}

	if( SysRedrawFlag & PROG_UPDATA )
		{
		SysRedrawFlag &= (~PROG_UPDATA);
		ShowPROGFunc();
		DMA_Update_Flag = 1;
		}		
	}


