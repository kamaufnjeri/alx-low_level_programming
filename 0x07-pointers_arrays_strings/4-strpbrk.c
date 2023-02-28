#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k;
	char temp;

	i  = k = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				temp = *s;
				k++;
			}
			j++;
		}
		i++;
	}
	return (temp);
}
