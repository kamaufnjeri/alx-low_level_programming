#include "main.h"
/**
 * _strcat - function to concatenate two strings
 *
 * @dest: string @src is added to
 * @src: string to appended
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < len1; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	dest[len2] = '\0';
	return (dest);
}
