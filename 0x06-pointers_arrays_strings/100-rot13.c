#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function that encodes a string using rot13
 * @s: Points to string parameters
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[a] == data1[j])
			{
				s[a] = datarot[j];
				break;
			}
		}
	}
	return (s);
}


