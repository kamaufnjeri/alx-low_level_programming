#include "main.h"
#include <string.h>

/**
 * _strlen - length of string
 * @s: string pointer
 * Return: return length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
