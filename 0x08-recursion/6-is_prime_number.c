#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int count_divisible(int num, int div)
{
	if (div == num)
	{
		return (0);
	}
	if (num % div == 0)
	{
		return (1);
	}
	else
		return (count_divisible(num, div + 1));
}


/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2, f;
	
	f = count_divisible(n, div);
	if (f == 0)
		return (1);
	else
		return (0);
}
