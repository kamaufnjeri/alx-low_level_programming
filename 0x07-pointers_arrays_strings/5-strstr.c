#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			return (haystack[count + 1]);
		if (needle[count] == 0)
			return (haystack);
	}
	return (0);
}
