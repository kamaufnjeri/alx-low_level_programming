#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: character that is be alphabet
 * Return: 1 for alphabets and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
