
/*******************************************************************************
* name: wifi
*
* preset name: sumotoy_icon
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 144
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
* ------------------------------------------------------------------------------
* Created by a custom template of LCD-Image-Converter for .s.u.m.o.t.o.y.
* Icon template version: 1.3
* Note: Used for B&W images as icons
* ------------------------------------------------------------------------------
*******************************************************************************/
#if !defined(SUMO_ICN_LIB_wifi)
#define SUMO_ICN_LIB_wifi

#include <stdlib.h>
#include "../_includes/TFT_ST7735_cpuCommons.h"
#include "../_includes/sumotoy_iconDescription.h"





static const _smCharType image_data_wifi[126]
#if defined(_FORCE_PROGMEM__)
 PROGMEM 
#endif
= {0xff, 0xfe, 0x07, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x7f, 0xf1, 0x00, 0x00, 0x0f, 0xff, 0x81, 0x99, 0xb1, 0x80, 0x9c, 0x19, 0x9b, 0x18, 0x09, 0xc0, 0x99, 0x31, 0x9f, 0x9c, 0x0f, 0xf0, 0x19, 0xff, 0xc0, 0xff, 0x31, 0x81, 0x9c, 0x0f, 0xf3, 0x18, 0x19, 0xc0, 0xe7, 0x31, 0x9f, 0x9c, 0x06, 0x63, 0x19, 0xf9, 0xc0, 0x66, 0x31, 0x9f, 0x9c, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xf8, 0x80, 0x00, 0x7f, 0xff, 0x18, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff};

static const tIcon wifi = { image_data_wifi, 36, 28, 126, RLE_no }; 



#endif



