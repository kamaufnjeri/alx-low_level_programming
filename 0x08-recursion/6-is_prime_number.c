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
int count_divisible(int num, int count)
{
	int c;
	
	count = 0;
	if (c <= num)
	{
		if (num % c == 0)
		{
			count = 1 + count_divisible(num, c - 1));
		}
	}
	if (count == 2)
	{
		return (count);
	}
	else
		return (1);
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
	int count;
	
	count = count_divisible(n, count);
	if (count == 2)
		return (1);
	else
		return (0);
}
