#include "main.h"

/**
 * _strchr - function name to locate character in a string
 * @s: Represents string (Character Array)
 * @c: Represents character we are searching for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
