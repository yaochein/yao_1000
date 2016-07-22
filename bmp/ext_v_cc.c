/*
  C-file generated by emWin Bitmap converter 2.14a, compiled Mar 20 2001, 10:24:07

(c) 1998 SEGGER Microcontroller Systeme GmbH
         Tel.  49-2103-895899
         Fax.  49-2103-895860
         EMail info@segger.com
               www.segger.com




  Source file: ext_v_cc
  Dimensions:  65 * 16
  NumColors:   2
*/

#include "stdlib.h"

#include "GUI.H"

/*   Palette  


The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/
const GUI_COLOR Colorsext_v_cc[] = {
     0x000000,0xFFFFFF
};


const GUI_LOGPALETTE Palext_v_cc = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &Colorsext_v_cc[0]
};



const unsigned char acext_v_cc[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, ______XX, XXXXXXXX, XXXXXXXX, XXX__XXX, XX__XXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, X_XXXXXX, XXX__XXX, XX__XXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, __XXXXXX, XXXX__XX, X__XXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, __XX__X_, ___XXXXX, XXXX__XX, X__XXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, ______XX, __XX__XX, __XXXXXX, XXXX__XX, X__XXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, X____XXX, __XXXXXX, XXXXX__X, __XXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XX__XXXX, __XXXXXX, XXXXX__X, __XXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, X____XXX, __XXXXXX, XXXXX__X, __XXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, __XXXXXX, __XX__XX, __XX__XX, XXXXXX__, _XXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, ______XX, __XX__XX, X__X__XX, XXXXXX__, _XXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______
};

const GUI_BITMAP bmext_v_cc = {
 65, /* XSize */
 16, /* YSize */
 9, /* BytesPerLine */
 1, /* BitsPerPixel */
 acext_v_cc,  /* Pointer to picture data (indices) */
 &Palext_v_cc  /* Pointer to palette */
};

/* *** End of file *** */
