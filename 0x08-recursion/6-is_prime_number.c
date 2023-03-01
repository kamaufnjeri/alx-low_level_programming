#include "main.h"

int is_prime_number(int n);
int CheckPrime(int i, int num);
/**
 * CheckPrime - Checks if a number is divisible.
 * @num: The number to be checked.
 * @i: The divisor.
 *
 * Return: 0 or 1
 */
int CheckPrime(int i, int num)
{
	if (num <= 1)
		return (0);
	if (num == 2 || num == 3 || num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (CheckPrime(i + 1, num));
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
	return (CheckPrime(2, n));
}
