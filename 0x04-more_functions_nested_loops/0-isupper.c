#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: character to be checked
 * Return: 1 or c or 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
