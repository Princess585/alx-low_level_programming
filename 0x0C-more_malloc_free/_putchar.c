#include "main.h"
#include <unistd.h>
/**
 * _putchar - Erites the character c to stdout
 * @c: Prints the character
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1 , &c. 1));
}	
