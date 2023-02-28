#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to char parameter
 * @src: pointer to char parameter
 * @n: value in bytes to copy
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j = 0;

	while (dest[i] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
