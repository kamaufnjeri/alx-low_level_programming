#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: pointer to a square matrix of integers, defined in main
 *
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumD1 = 0;
	int sumD2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sumD1 += a[i];
		}
		if (i % (size - 1) == 0 && i > 0 && i < (size * size) - 1)
		{
			sumD2 += a[i];
		}
	}
	printf("%d, %d\n", sumD1, sumD2);
}
