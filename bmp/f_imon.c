/*
  C-file generated by emWin Bitmap converter 2.14a, compiled Mar 20 2001, 10:24:07

(c) 1998 SEGGER Microcontroller Systeme GmbH
         Tel.  49-2103-895899
         Fax.  49-2103-895860
         EMail info@segger.com
               www.segger.com




  Source file: f_imon
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
const GUI_COLOR Colorsf_imon[] = {
     0x000000,0xFFFFFF
};


const GUI_LOGPALETTE Palf_imon = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &Colorsf_imon[0]
};



const unsigned char acf_imon[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, ______XX, XXXXX__X, XXXXX___, XXX___XX, XX____XX, XX__XXX_, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX___, XXX___XX, X__XX__X, XX___XX_, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX___, _X____XX, __XXXX__, XX___XX_, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX___, _X____XX, __XXXX__, XX____X_, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX__X, _X_X__XX, __XXXX__, XX__X_X_, _XXXXXXX, X_______,
  XXXXXXXX, ______XX, ___XX__X, XXXXX__X, _X_X__XX, __XXXX__, XX__X___, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX__X, _X_X__XX, __XXXX__, XX__XX__, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX__X, ___X__XX, __XXXX__, XX__XX__, _XXXXXXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX__X, ___X__XX, X__XX__X, XX__XXX_, _XX__XXX, X_______,
  XXXXXXXX, __XXXXXX, XXXXX__X, XXXXX__X, X_XX__XX, XX____XX, XX__XXX_, _XX__XXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______
};

const GUI_BITMAP bmf_imon = {
 65, /* XSize */
 16, /* YSize */
 9, /* BytesPerLine */
 1, /* BitsPerPixel */
 acf_imon,  /* Pointer to picture data (indices) */
 &Palf_imon  /* Pointer to palette */
};

/* *** End of file *** */
