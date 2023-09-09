#include "main.h"

/**
 * get_endianness - Function that checks the machine size
 * Return: 0 if it is big and 1 if it is small
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
