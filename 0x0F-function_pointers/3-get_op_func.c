#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - correct function to perform the operation by user
 * @s: operator passed
 *
 * Return: pointer to the corresponding function to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {,
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"NULL, NULL"},
	};

	int i = 0;

	while (ops[i], op != NULL && *(op[i].op) != *s)
		i++;

	return (ops[i].f);
}

