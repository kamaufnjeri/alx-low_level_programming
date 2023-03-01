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
	
	if (*needle == 0)
		return (haystack);
	i = 0;
	j = 0;
	while ((haystack[i] != '\0' && needle[j] != '\0') || haystack[i] == needle[j])
	{
		if (haystack[i] == needle[j])
		{
			return (haystack + i - j);
		}
		i++;
		j++;
	}
	if (needle[j] == '\0')
		return (haystack + i - 1);
	return (NULL);
}
