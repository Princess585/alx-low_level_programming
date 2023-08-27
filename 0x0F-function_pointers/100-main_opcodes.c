#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints its own opcodes of its main function
 * @argv: The argument array
 * @argc: The argument number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arr = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx", arr[a]);
	}
	return (0);
}

