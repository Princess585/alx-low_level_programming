#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: Prints the string between strings
 * @n: string number passed to the function
 * @.,.: strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(ni1)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}


