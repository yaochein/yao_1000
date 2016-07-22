/*
  C-file generated by emWin Bitmap converter 2.14a, compiled Mar 20 2001, 10:24:07

(c) 1998 SEGGER Microcontroller Systeme GmbH
         Tel.  49-2103-895899
         Fax.  49-2103-895860
         EMail info@segger.com
               www.segger.com




  Source file: cccv
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
const GUI_COLOR Colorscccv[] = {
     0x000000,0xFFFFFF
};


const GUI_LOGPALETTE Palcccv = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &Colorscccv[0]
};



const unsigned char accccv[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, X_____XX, XX_____X, XXXXXXXX, XXXXXXXX, XXX_____, X__XXXXX, __XXXXXX,
  XXXXXXXX, __XXX__X, X__XXX__, XXXXXXXX, XXXXXXXX, XX__XXX_, ___XXXXX, __XXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XX__XXX_, _XXXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXXXX_, _XXXXXXX, X__XXXXX, XX__XXX_, _XXXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXXXX_, _XXXXXXX, X__XXXXX, XX__XXX_, _XXXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXX___, ___XXXXX, X__XXXXX, XXX__X__, XXXXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXXXX_, _XXXXXXX, X__XXXXX, XXX__X__, XXXXXXXX,
  XXXXXXX_, _XXXXXXX, __XXXXXX, XXXXXXX_, _XXXXXXX, X__XXXXX, XXX__X__, XXXXXXXX,
  XXXXXXXX, __XXX__X, X__XXX__, XXXXXXXX, XXXXXXXX, XX__XXX_, _XXX___X, XXXXXXXX,
  XXXXXXXX, X_____XX, XX_____X, XXXXXXXX, XXXXXXXX, XXX_____, XXXX___X, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

const GUI_BITMAP bmcccv = {
 64, /* XSize */
 16, /* YSize */
 8, /* BytesPerLine */
 1, /* BitsPerPixel */
 accccv,  /* Pointer to picture data (indices) */
 &Palcccv  /* Pointer to palette */
};

/* *** End of file *** */
