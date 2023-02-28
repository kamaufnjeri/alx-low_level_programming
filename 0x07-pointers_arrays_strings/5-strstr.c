#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, z;

	i = 0;
	z = 0;
	while (*haystack != '\0')
	{
		z = 0;
		while (*needle != '\0')
		{
			if (*haystack == *needle)
				return ((haystack));
			needle+;
		}
		haystack++;
	}
	return (0);
}

