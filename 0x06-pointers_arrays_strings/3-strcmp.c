#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string to compare
 * @s2: string for comparison
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	for (*s1 != '\0'; *s2 != '\0'; *s1 = *s2)
	{
		s1++;
		s2++;
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
