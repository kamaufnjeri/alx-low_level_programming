#include "main.h"
/**
 * _strspn - Find length of string that consists only of chosen bytes
 * @s: String to search
 * @accept: The acceptable bytes string can contain
 *
 * Return: Length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, l = 0;
	
	while (s[i] && accept[j])
	{
		i++;
		j++;
		l++;
	}
	return (l);
}
