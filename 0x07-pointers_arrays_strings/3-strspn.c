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
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
	{
		i = 0;
		prevC = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				consistC++;
			i++;
		}
		if (prevC == 0) /* didn't equal a char from accept */
			break;
		s++;
	}
	return (consistC);
}
