#include "main.h"
#include <stdio.h>
/**
  * _strstr - function that locates a substring
  * @haystack: string that is being compared
  * @needle: substring that is being located
  * Return: null is nothing is found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
