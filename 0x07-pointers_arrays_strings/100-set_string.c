#include "main.h"

/**
 * set_string - sets the val of a pointer to a char
 * @s: points to pointer we need to set to
 * @to: string to be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
