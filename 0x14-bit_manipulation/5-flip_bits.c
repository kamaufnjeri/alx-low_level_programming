#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  *
  * Return: ...
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, c = 0;

	for (a = 0; a = n ^ m; )
	{
		if (a & 1)
			c++;

		a >>= 1;
	}

	return (c);
}
