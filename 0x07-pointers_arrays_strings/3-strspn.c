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
	unsigned int i = 0, j = 0, k = 0, l;

	while (s[i] != '\0')
	{
		l = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				l++;
				k++;
			}
			else if (accept[j] != s[i])
			{
				j++;
			}
		}
		if (l == 0)
			break;
		i++;
	}
	return (k);
}
