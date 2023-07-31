#include "main.h"

/**
 * _strchr - Function that will locate character in a string
 * @s: String that needs to be searched
 * @c: Character that searches in s
 * Return: s or Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
