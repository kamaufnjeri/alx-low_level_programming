#include "main.h"

/**
 * rev_string - reverse
 * @s: input
 * Return: string in revers
 */
void rev_string(char *s)
{
	char rv;
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
