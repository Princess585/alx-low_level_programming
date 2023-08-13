#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the c character to stdout
 * @c: Prints the character
 *
 * Return: 1 on success.
 * On error, it returns -1 and errno is appropriatley set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
