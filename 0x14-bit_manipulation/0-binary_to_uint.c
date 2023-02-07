#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (; len--; count++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			sum += 1 << count;

		count++;
	}

	return (sum);
}
