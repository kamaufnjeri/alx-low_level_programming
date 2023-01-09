#include "main.h"

/**
 * _islower - check for lowercase letters
 * @c: the character
 * Return: 1 If lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
