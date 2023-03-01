#include "main.h"

/**
 * factorial - to get factorial of n
 * @n: no to find factorial
 * Return: -1 if n < 0 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
