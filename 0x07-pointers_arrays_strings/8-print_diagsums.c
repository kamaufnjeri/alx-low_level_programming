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
	int i, j;
	int sumD1 = 0;
	int sumD2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			while (i++ && j++ && j == i)
			{
				sumD1 += a[i][j];
			}
			while (i++ && j--)
			{
				sumD2 += a[i][j];
			}
	}
	printf("%d, %d\n", sumD1, sumD2);
}
