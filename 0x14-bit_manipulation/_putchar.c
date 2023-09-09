#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function that writes character c to the stdout
 * @c: Print the character
 *
 * Return: 1 on success, -1 on error and errno is set appropriatlely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
