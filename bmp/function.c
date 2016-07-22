/*
  C-file generated by emWin Bitmap converter 2.14a, compiled Mar 20 2001, 10:24:07

(c) 1998 SEGGER Microcontroller Systeme GmbH
         Tel.  49-2103-895899
         Fax.  49-2103-895860
         EMail info@segger.com
               www.segger.com




  Source file: function
  Dimensions:  64 * 16
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
const GUI_COLOR Colorsfunction[] = {
     0x000000,0xFFFFFF
};


const GUI_LOGPALETTE Palfunction = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &Colorsfunction[0]
};



const unsigned char acfunction[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXX_, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXX_, _XXXXXX_, _XX__XX_, _X__XXXX, ____X___, _X__XXX_, ___XXX__, X__XXXXX,
  XXXXXXX_, _XXXXXX_, _XX__XX_, __X__XX_, _XX__X__, XX__XX__, XX__XX__, _X__XXXX,
  XXXXXXX_, _____XX_, _XX__XX_, _XX__XX_, _XXXXX__, XX__XX__, XX__XX__, XX__XXXX,
  XXXXXXX_, _XXXXXX_, _XX__XX_, _XX__XX_, _XXXXX__, XX__XX__, XX__XX__, XX__XXXX,
  XXXXXXX_, _XXXXXX_, _XX__XX_, _XX__XX_, _XXXXX__, XX__XX__, XX__XX__, XX__XXXX,
  XXXXXXX_, _XXXXXX_, _X___XX_, _XX__XX_, _XX__X__, XX__XX__, XX__XX__, XX__XXXX,
  XXXXXXX_, _XXXXXXX, __X__XX_, _XX__XXX, ____XXX_, _X__XXX_, ___XXX__, XX__XXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

const GUI_BITMAP bmfunction = {
 64, /* XSize */
 16, /* YSize */
 8, /* BytesPerLine */
 1, /* BitsPerPixel */
 acfunction,  /* Pointer to picture data (indices) */
 &Palfunction  /* Pointer to palette */
};

/* *** End of file *** */
