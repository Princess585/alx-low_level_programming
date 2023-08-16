#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers to be returned
 * @a: first number
 * @b: second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the difference of two numbers to be returned
 * @a: first number
 * @b: second number
 * Return: second number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product of two numbers are returned
 * @a: first number
 * @b: second number
 * Return: product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers to be returned
 * @a: first number
 * @b: second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers is returned
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
