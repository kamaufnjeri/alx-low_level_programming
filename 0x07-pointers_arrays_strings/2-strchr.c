#include "main.h"

/**
 * _strchr - check for first occurrence of character c
 * @s: string
 * @c: character to be checked
 *Return: S or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;

	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
