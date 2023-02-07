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
	unsigned long int ma = 0, count = 0;

	ma = n ^ m;
	while (ma)
	{
		if (ma & 1)
			count++;

		ma >>= 1;
	}

	return (count);
}
