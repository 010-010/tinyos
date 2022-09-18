#include <pgmspace.h>
#include "resources.h"

#ifdef __cplusplus
 extern "C" {
#endif


const char keyboards[4][10] PROGMEM = {
  {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
  {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
  {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A'},
  {'z', 'x', 'c', 'v', ' ', 'b', 'n', 'm', ',', '.'},
};

const uint8_t wallpaper[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x4e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x83, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0xe6, 0x00,
  0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x80, 0x01,
  0x83, 0x00, 0x00, 0x00, 0x00, 0x06, 0x01, 0xc0, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0xff, 0xfe, 0x01, 0x80, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x03, 0xfc, 0x01, 0x80, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x04, 0x01, 0x80, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xe0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
  0x00, 0xc0, 0x00, 0xc0, 0x00, 0x38, 0x00, 0x00, 0x60, 0x01, 0xc0, 0x01, 0xe0, 0x00, 0x3c, 0x00,
  0x00, 0x40, 0x01, 0x80, 0x03, 0xe0, 0x00, 0x7c, 0x00, 0x00, 0x20, 0x03, 0x00, 0x03, 0xe1, 0xfc,
  0x7e, 0x0e, 0x00, 0x20, 0x03, 0x07, 0xe3, 0xe3, 0xfe, 0x3e, 0x1f, 0xc0, 0x20, 0x06, 0x0f, 0xf3,
  0xc3, 0xfe, 0x3e, 0x7f, 0xe0, 0x20, 0x06, 0x1f, 0xf9, 0xc3, 0xfc, 0x1c, 0x7f, 0xf0, 0x20, 0x06,
  0x1f, 0xfc, 0x01, 0xf8, 0x00, 0xff, 0xe0, 0x20, 0x06, 0x3f, 0xfe, 0x00, 0x60, 0x00, 0xff, 0xf0,
  0x20, 0x06, 0x3f, 0xfc, 0x00, 0x60, 0x00, 0xff, 0xf0, 0x20, 0x06, 0x3f, 0xf8, 0x00, 0x60, 0x00,
  0xff, 0xf0, 0x20, 0x06, 0x3f, 0xf0, 0x00, 0x60, 0x00, 0x7f, 0xe0, 0x20, 0x06, 0x1f, 0xe0, 0x01,
  0xfc, 0x00, 0x3f, 0xe0, 0x20, 0x03, 0x1f, 0xe0, 0x03, 0x0c, 0x00, 0x1f, 0xe0, 0x60, 0x03, 0x8f,
  0xc0, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x40, 0x01, 0x83, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
  0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xc0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x06,
  0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0c, 0x00, 0x80, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x60, 0x0c, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x08, 0x00, 0x20, 0x18, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x20, 0x08, 0x01, 0x80, 0x00, 0x00, 0x00, 0x08, 0x00, 0x20, 0x18, 0x01, 0x80, 0x00,
  0x00, 0x00, 0x0c, 0x00, 0x30, 0x10, 0x01, 0x80, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x10, 0x10, 0x01,
  0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x30, 0x10, 0x01, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x10,
  0x10, 0x01, 0x80, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x10, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0c,
  0x00, 0x18, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x18, 0x30, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x0c, 0x00, 0x18, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x18, 0x20, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x06, 0x00, 0x18
};

const uint8_t epd_bitmap_weather[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x0e, 0x00, 0x38, 0x00, 0x00, 0x01, 0xc0, 0x0e, 0x00, 0x38,
  0x00, 0x00, 0x01, 0xc0, 0x0e, 0x00, 0x38, 0x00, 0x00, 0x00, 0x38, 0x00, 0x01, 0xc0, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x38, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00,
  0x00, 0x0f, 0xc7, 0x00, 0x0e, 0x3f, 0x00, 0x00, 0x0f, 0xc7, 0x00, 0x0e, 0x3f, 0x00, 0x00, 0x0f,
  0xc7, 0x00, 0x0e, 0x3f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x8e, 0x00,
  0x00, 0x00, 0x00, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00,
  0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80,
  0x00, 0x70, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e,
  0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00,
  0x07, 0xfc, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x0f, 0xf8, 0x00, 0x38, 0x03, 0x80, 0x00, 0x70, 0x07, 0x00, 0x38, 0x03, 0x80, 0x00,
  0x70, 0x07, 0x00, 0x38, 0x03, 0x80, 0x00, 0x70, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07,
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff,
  0xf8, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_foreign_currency[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,
  0x80, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00,
  0x00, 0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00,
  0xe0, 0x01, 0xc0, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x01, 0xc0, 0x01, 0xc0, 0x00, 0x07, 0x00, 0x01,
  0xc0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x01, 0xc0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x0f, 0xfc, 0x00,
  0x38, 0x00, 0x07, 0x00, 0x0f, 0xfc, 0x00, 0x38, 0x00, 0x07, 0x00, 0x0f, 0xfc, 0x00, 0x38, 0x00,
  0x07, 0x00, 0x70, 0x03, 0x80, 0x38, 0x00, 0x38, 0x00, 0x70, 0x03, 0x80, 0x07, 0x00, 0x38, 0x00,
  0x70, 0x03, 0x80, 0x07, 0x00, 0x38, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x70, 0x00,
  0x00, 0x07, 0x00, 0x38, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x70, 0x00, 0x00, 0x07,
  0x00, 0x38, 0x00, 0x0f, 0xfc, 0x00, 0x07, 0x00, 0x38, 0x00, 0x0f, 0xfc, 0x00, 0x07, 0x00, 0x38,
  0x00, 0x0f, 0xfc, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x03, 0x80, 0x07, 0x00, 0x38, 0x00, 0x00,
  0x03, 0x80, 0x07, 0x00, 0x38, 0x00, 0x00, 0x03, 0x80, 0x07, 0x00, 0x38, 0x00, 0x00, 0x03, 0x80,
  0x07, 0x00, 0x38, 0x00, 0x00, 0x03, 0x80, 0x07, 0x00, 0x38, 0x00, 0x70, 0x03, 0x80, 0x07, 0x00,
  0x38, 0x00, 0x70, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x70, 0x03, 0x80, 0x38, 0x00, 0x07, 0x00,
  0x0f, 0xfc, 0x00, 0x38, 0x00, 0x07, 0x00, 0x0f, 0xfc, 0x00, 0x38, 0x00, 0x07, 0x00, 0x0f, 0xfc,
  0x00, 0x38, 0x00, 0x07, 0x00, 0x01, 0xc0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x01, 0xc0, 0x00, 0x38,
  0x00, 0x00, 0xe0, 0x01, 0xc0, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x01, 0xc0, 0x01, 0xc0, 0x00, 0x00,
  0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x1f, 0x80,
  0x00, 0x7e, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_thermometer[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x22, 0x00, 0x0f, 
	0xfc, 0x00, 0x00, 0x00, 0x22, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0xc1, 0x80, 0x70, 0x03, 0x80, 
	0x00, 0x00, 0xc1, 0x80, 0x70, 0x03, 0x80, 0x00, 0x00, 0xc1, 0x80, 0x70, 0x03, 0x80, 0x00, 0x03, 
	0x00, 0x60, 0x70, 0x03, 0x80, 0x00, 0x03, 0x00, 0x60, 0x70, 0x03, 0x80, 0x00, 0x03, 0x00, 0x60, 
	0x70, 0x03, 0x80, 0x00, 0x03, 0x00, 0x60, 0x70, 0x03, 0x80, 0x00, 0x0c, 0x00, 0x18, 0x70, 0x03, 
	0x80, 0x00, 0x0c, 0x61, 0x18, 0x70, 0x03, 0x80, 0x00, 0x0c, 0xe3, 0x98, 0x70, 0x03, 0x80, 0x00, 
	0x10, 0x67, 0x04, 0x71, 0xe3, 0x80, 0x00, 0x10, 0x0e, 0x04, 0x71, 0xe3, 0x80, 0x00, 0x10, 0x1c, 
	0x04, 0x71, 0xe3, 0x80, 0x00, 0x10, 0x38, 0x04, 0x71, 0xe3, 0x80, 0x00, 0x10, 0x73, 0x84, 0x71, 
	0xe3, 0x80, 0x00, 0x10, 0x63, 0x84, 0x71, 0xe3, 0x80, 0x00, 0x10, 0x03, 0x04, 0x71, 0xe3, 0x80, 
	0x00, 0x10, 0x00, 0x04, 0x71, 0xe3, 0x80, 0x00, 0x0c, 0x00, 0x1b, 0x81, 0xe0, 0x70, 0x00, 0x03, 
	0x00, 0x63, 0x81, 0xe0, 0x70, 0x00, 0x03, 0x00, 0x63, 0x81, 0xe0, 0x70, 0x00, 0x00, 0xff, 0x9c, 
	0x0f, 0xfc, 0x0e, 0x00, 0x00, 0xff, 0x9c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 
	0x0e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 
	0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 
	0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 
	0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 
	0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 
	0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 
	0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_calendar[] PROGMEM = {
  0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f,
  0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff,
  0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1e,
  0x0f, 0x00, 0x00, 0x1e, 0x0f, 0x00, 0x1e, 0x0f, 0x00, 0x00, 0x1e, 0x0f, 0x00, 0x1e, 0x0f, 0x00,
  0x00, 0x1e, 0x0f, 0x00, 0x1e, 0x0f, 0x00, 0x00, 0x1e, 0x0f, 0x00, 0x1e, 0x0f, 0x00, 0x00, 0x1e,
  0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x01, 0xff,
  0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xff,
  0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0,
  0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00,
  0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f,
  0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00
};

const uint8_t epd_bitmap_settings[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00,
  0x3e, 0x1f, 0x1f, 0x0f, 0x80, 0x00, 0x00, 0x7e, 0x3f, 0x1f, 0x8f, 0xc0, 0x00, 0x00, 0x7e, 0x3f,
  0x1f, 0x8f, 0xc0, 0x00, 0x00, 0x71, 0xc0, 0x00, 0x71, 0xc0, 0x00, 0x00, 0x71, 0xc0, 0x00, 0x71,
  0xc0, 0x00, 0x00, 0x71, 0xc0, 0x00, 0x71, 0xc0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00,
  0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x70,
  0x07, 0xfc, 0x01, 0xc0, 0x00, 0x00, 0x70, 0x07, 0xfc, 0x01, 0xc0, 0x00, 0x00, 0x70, 0x07, 0xfc,
  0x01, 0xc0, 0x00, 0x0f, 0xf0, 0x38, 0x03, 0x81, 0xfe, 0x00, 0x0f, 0xf0, 0x38, 0x03, 0x81, 0xfe,
  0x00, 0x0f, 0xf0, 0x38, 0x03, 0x81, 0xfe, 0x00, 0x0e, 0x00, 0x38, 0x03, 0x80, 0x0e, 0x00, 0x0e,
  0x00, 0x38, 0x03, 0x80, 0x0e, 0x00, 0x0e, 0x00, 0x38, 0x03, 0x80, 0x0e, 0x00, 0x0f, 0xf0, 0x38,
  0x03, 0x81, 0xfe, 0x00, 0x0f, 0xf0, 0x38, 0x03, 0x81, 0xfe, 0x00, 0x0f, 0xf0, 0x38, 0x03, 0x81,
  0xfe, 0x00, 0x00, 0x70, 0x07, 0xfc, 0x01, 0xc0, 0x00, 0x00, 0x70, 0x07, 0xfc, 0x01, 0xc0, 0x00,
  0x00, 0x30, 0x07, 0xfc, 0x01, 0x80, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0e,
  0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x71, 0xc0, 0x00,
  0x71, 0xc0, 0x00, 0x00, 0x71, 0xc0, 0x00, 0x71, 0xc0, 0x00, 0x00, 0x79, 0xc0, 0x00, 0x73, 0xc0,
  0x00, 0x00, 0x7e, 0x3f, 0x1f, 0x8f, 0xc0, 0x00, 0x00, 0x7e, 0x3f, 0x1f, 0x8f, 0xc0, 0x00, 0x00,
  0x3e, 0x1f, 0x1f, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_keyboard[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00,
  0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0xe1, 0x86, 0x18,
  0x61, 0xc7, 0x00, 0x38, 0xe3, 0x8e, 0x1c, 0x71, 0xc7, 0x00, 0x38, 0xe3, 0x8e, 0x1c, 0x71, 0xc7,
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x1c, 0x71,
  0xe3, 0x8e, 0x07, 0x00, 0x38, 0x1c, 0x71, 0xe3, 0x8e, 0x07, 0x00, 0x38, 0x0c, 0x30, 0xc3, 0x0c,
  0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0xe3, 0xff, 0xff, 0xf1, 0xc7, 0x00, 0x38, 0xe3,
  0xff, 0xff, 0xf1, 0xc7, 0x00, 0x38, 0xe3, 0xff, 0xff, 0xf1, 0xc7, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07,
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f,
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_sun[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x38, 0x07, 0x00, 0x70,
  0x00, 0x03, 0x80, 0x38, 0x07, 0x00, 0x70, 0x00, 0x03, 0x80, 0x38, 0x07, 0x00, 0x70, 0x00, 0x00,
  0x70, 0x3f, 0xff, 0x03, 0x80, 0x00, 0x00, 0x70, 0x3f, 0xff, 0x03, 0x80, 0x00, 0x00, 0x70, 0x3f,
  0xff, 0x03, 0x80, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xfc,
  0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00,
  0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x3f, 0xf0,
  0x00, 0x00, 0x03, 0xff, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x03, 0xff, 0x00, 0x3f, 0xf0, 0x00, 0x00,
  0x03, 0xff, 0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80,
  0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00,
  0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00,
  0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x03,
  0xff, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x03, 0xff, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x03, 0xff, 0x00,
  0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0e,
  0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00,
  0xfc, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x70, 0x3f, 0xff, 0x03, 0x80,
  0x00, 0x00, 0x70, 0x3f, 0xff, 0x03, 0x80, 0x00, 0x00, 0x70, 0x3f, 0xff, 0x03, 0x80, 0x00, 0x03,
  0x80, 0x38, 0x07, 0x00, 0x70, 0x00, 0x03, 0x80, 0x38, 0x07, 0x00, 0x70, 0x00, 0x03, 0x80, 0x38,
  0x07, 0x00, 0x70, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_wi_fi[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xe0, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xe0,
  0x01, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x01, 0xfe, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x01,
  0xe0, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x01, 0xe0, 0x00,
  0x01, 0xe0, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x1e, 0x00, 0x1f, 0xfe, 0x00, 0x1e, 0x00, 0x1e, 0x00,
  0x1f, 0xfe, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1f, 0xfe, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1f, 0xfe,
  0x00, 0x1e, 0x00, 0x00, 0x01, 0xe0, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x01, 0xe0, 0x00,
  0x00, 0x00, 0x01, 0xe0, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x01, 0xe0, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
  0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff,
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_clock [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
	0xc0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00,
	0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x01, 0xc0, 0x00, 0x00,
	0xe0, 0x00, 0xe0, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x01, 0xc0, 0x00, 0x07, 0x00, 0x00,
	0xe0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x00,
	0x38, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x00, 0x38, 0x00,
	0x38, 0x00, 0x00, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00,
	0x00, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0xe0,
	0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x07,
	0x00, 0x38, 0x01, 0xff, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x01, 0xff, 0xe0, 0x00, 0x07, 0x00, 0x38,
	0x01, 0xff, 0xe0, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00,
	0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x38,
	0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00,
	0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0x00,
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0,
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_thermometer2[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70,
  0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe3,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe3, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x71, 0xe3, 0x80, 0x00, 0x00, 0x00, 0x03, 0x81, 0xe0, 0x70, 0x00, 0x00, 0x00,
  0x03, 0x81, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x03, 0x81, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x1c, 0x0f,
  0xfc, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e,
  0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00,
  0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c,
  0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff,
  0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0x8e, 0x00,
  0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00,
  0x1c, 0x0f, 0xfc, 0x0e, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80,
  0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t epd_bitmap_humidity[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 
	0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x80, 
	0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 
	0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 
	0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 
	0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 
	0x00, 0x00, 0x1c, 0x3c, 0x02, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x3c, 0x07, 0x0e, 0x00, 0x00, 0x00, 
	0x1c, 0x3c, 0x0f, 0x0e, 0x00, 0x00, 0x00, 0xe0, 0x3c, 0x1e, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 
	0x3c, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0x78, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0xf0, 0x01, 
	0xc0, 0x00, 0x00, 0xe0, 0x01, 0xe0, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x03, 0xc0, 0x01, 0xc0, 0x00, 
	0x00, 0xe0, 0x07, 0x80, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x0f, 0x0f, 0x01, 0xc0, 0x00, 0x00, 0xe0, 
	0x1e, 0x0f, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x3c, 0x0f, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x18, 0x0f, 
	0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 
	0x00, 0x70, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


#ifdef __cplusplus
}
#endif
