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
	unsigned long int m = 0, c = 0;

	m = n ^ m;
	while (m)
	{
		if (m & 1)
			c++;

		m >>= 1;
	}

	return (c);
}
