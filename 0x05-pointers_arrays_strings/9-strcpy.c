#include "main.h"

/**
 * _strcpy - strings pointed to b e copied
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;
	
	while (src[len] != '\0')
		len++;
	while (*src != '\0')
	{
		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}
