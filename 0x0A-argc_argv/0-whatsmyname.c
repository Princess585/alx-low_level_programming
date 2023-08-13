#include <stdio.h>
#include "main.h"

/**
 * main - prints its name followed by a new line
 * @argc: counts the number of arguments
 * @argv: factor of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
