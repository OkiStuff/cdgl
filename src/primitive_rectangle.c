#include "cdgl/primitive_rectangle.h"
#include "cdgl/internal/lcd_driver.h"
#include "cdgl/types.h"

cdgl_vec2 cdgl_primitive_rectangle_draw(cdgl_instance* instance, cdgl_primitive_rectangle* rect)
{
	cdgl_vec2 bottom_corner = (cdgl_vec2)
	{
		rect->position.x + rect->width,
		rect->position.y + rect->height
	};

	
	lcd_fill(instance->lcd,
	         rect->position.x, rect->position.y,
	         bottom_corner.x, bottom_corner.y,
	         0 // TODO
	);

	return bottom_corner;
}
