#ifndef CDGL_INSTANCE_H
#define CDGL_INSTANCE_H

#include "internal/lcd_driver.h"
#include "types.h"
#include "primitive.h"

typedef struct cdgl_instance
{
	cdgl_primitive_head primitives[CDGL_MAX_PRIMITIVES];
	cdgl_color background_color;
	uint8_t primitives_next_index;
	lcd_t* lcd;
	lcd_params_t* lcd_params;
} cdgl_instance;

void cdgl_instance_create(cdgl_instance* instance, lcd_t* lcd, lcd_params_t* lcd_parameters);

#endif // CDGL_INSTANCE_H
