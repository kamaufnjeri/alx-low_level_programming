#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	i  = 0;
	while (s[i] != '\0' && s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] = accept[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}
