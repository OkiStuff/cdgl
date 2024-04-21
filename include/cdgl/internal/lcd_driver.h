#ifndef CDGL_INTERNAL_LCD_DRIVER
#define CDGL_INTERNAL_LCD_DRIVER

#ifdef CDGL_DESKTOP_ENVIORNMENT
	#include "../../../deps/riot-lcd-sdl2/riot_lcd_sdl2.h"
#else
	#include <lcd.h>
#endif

#endif // CDGL_INTERNAL_LCD_DRIVER
