#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: counts the arguments
 * @argv: factor of the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
