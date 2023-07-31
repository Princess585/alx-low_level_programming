#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: sets a pointer to a pointer
 * @to: sets a pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
