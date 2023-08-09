#include <unistd.h>


/**
 * _putchar - Function that writes the character c to stdout
 * @c: The character that needs to be printed
 *
 * Return: 1 on success.
 * On error, return -1, and errno is set appropriatley.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}	
