#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: source string to search through.
 * @needle: string to search for.
 *
 * Return: return beginning of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			do
			{
				if (*needle == 0)
					return (haystack);
				needle++;
				haystack++;
			} while (*needle == * haystack);
		}
		haystack++;
	}
	return (0);
}
