#include <unistd.h>

/**
 * _putchar - Function that writes the character c to stdout
 * @c: Character to be printed
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is apppropriatley set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}		
