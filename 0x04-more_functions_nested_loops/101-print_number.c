#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1, b = 0, c, j = 1, k;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}
	k = n1;
	while (n1 > 9)
        {
            n1 = n1 / 10;
            b++;
            for (c = 0; c < b; c++)
            {
                j = j*10;
            }
            while (k > 9)
	    {
                _putchar(k / j + '0');
                k = k % j;
            }
        }
	_putchar((n1 % 10) + '0');
}
