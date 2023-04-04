#include "main.h"

/**
 * _strchr - function name to locate character in a string
 * @s: Represents string (Character Array)
 * @c: Represents character we are searching for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return &s[i];
        else if (s[i + 1] == c)
            return &s[i + 1];
    }

    return &s[i + 1];
}
