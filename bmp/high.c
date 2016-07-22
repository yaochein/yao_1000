/*
  C-file generated by emWin Bitmap converter 2.14a, compiled Mar 20 2001, 10:24:07

(c) 1998 SEGGER Microcontroller Systeme GmbH
         Tel.  49-2103-895899
         Fax.  49-2103-895860
         EMail info@segger.com
               www.segger.com




  Source file: high
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
const GUI_COLOR Colorshigh[] = {
     0x000000,0xFFFFFF
};


const GUI_LOGPALETTE Palhigh = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &Colorshigh[0]
};



const unsigned char achigh[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, XX__X__X, X__X__XX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX____, ___XX__X, X__X___X, X___X__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, X__XX__X, X__XX__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, X__XX__X, X__XX__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, X__XX__X, X__XX__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, X__X___X, X__XX__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXX__XX, X__XX__X, XX__X__X, X__XX__X, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX____XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_______
};

const GUI_BITMAP bmhigh = {
 65, /* XSize */
 16, /* YSize */
 9, /* BytesPerLine */
 1, /* BitsPerPixel */
 achigh,  /* Pointer to picture data (indices) */
 &Palhigh  /* Pointer to palette */
};

/* *** End of file *** */
