#include <unistd.h>

/**
 * _putchar - Function that writes char c to stdout
 * @c: The chars to print
 *
 * Return: 1 if successful
 * On error, -1 is to be returned, and errno appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

