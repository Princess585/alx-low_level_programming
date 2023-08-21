#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Function that checks if a strinfs is palindrome
 * @s: String to be reversed
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Function that returns string length
 * @s: Length where string needs to be calculated
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Function that checks the char reecursively
 * @s: String to be checked
 * @i: An iteration
 * @len: String lenth
 *
 * Return: 1 if pal , and 0 if not a pal
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

