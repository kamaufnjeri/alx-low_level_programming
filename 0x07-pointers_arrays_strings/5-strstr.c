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
	int i;
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (needle[i] == haystack[i])
		{
			do
			{
				if (*needle == '\0')
					return (haystack);
				i++;
			} while (needle[i] == haystack[i]);
		}
		haystack++;
	}
	return (0);
}
