#include <stdlib.h>
#include "holberton.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  *
  * Return: ...
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, count = 0;

	for (mask = 0; mask = n ^ m; )
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
