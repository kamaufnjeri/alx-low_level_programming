#include "main.h"

/**
 * _pow_recursion - find of x raised to y
 * @x: number to be raised to y
 * @y:power
 * Return: _ if y < 0 retrun -1, if y = 0 return 1
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
