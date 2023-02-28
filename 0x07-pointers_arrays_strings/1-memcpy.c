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
	unsigned int a;

	for (a = 0; a < n; )
	{
		dest[a++] = src[a++];
	}
	return (dest);
}
