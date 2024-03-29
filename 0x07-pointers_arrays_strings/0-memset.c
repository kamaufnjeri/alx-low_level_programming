#include "main.h"

/**
 * _memset - function
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory area
 * @n: number of bytes to be filled
 * Return: a pointer to thye filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

