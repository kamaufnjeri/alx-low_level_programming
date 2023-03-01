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
	int i, j, k;
	
	if (*needle == 0)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		for (k = i, j = 0; haystack[k] != '\0'&& needle[j] != '\0'; k++, j++)
		{
			if (haystack[k] == needle[j])
			{
				;
			}
			j++;
		}
		i++;
		if (needle[j] == '\0')
			return (haystack + i + j + 1);
	}
	return (NULL);
}
