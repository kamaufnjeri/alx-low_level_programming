#include "main.h"

/**
 * swap_int - given two integers to swap the values they are holding
 * @a: parameter 1 to interchange
 * @b: parameter 2 to interchange
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
