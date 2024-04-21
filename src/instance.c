#include "cdgl/instance.h"
#include "cdgl/internal/lcd_driver.h"

void cdgl_instance_create(cdgl_instance* instance, lcd_t* lcd, lcd_params_t* lcd_parameters)
{
	instance->background_color = CGDL_COLOR(255, 255, 255);
	instance->primitives_next_index = 0;

	instance->lcd = lcd;
	instance->lcd_params = lcd_parameters;
	
	lcd_init(instance->lcd, instance->lcd_params);
}

