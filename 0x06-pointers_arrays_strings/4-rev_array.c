#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be compared
 * @n:size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int k, b, c;

	b = 0; /*first array*/
	c = n - 1; /* last array*/
	while (b < c)
	{
		k = *(a + b); /* k is swap*/
		*(a + b) = *(a + c);
		*(a + c) = k;
		b++;
		c++;
	}
}
