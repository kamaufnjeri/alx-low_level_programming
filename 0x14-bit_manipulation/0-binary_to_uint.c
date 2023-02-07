#include <main.h>

/**
 * binary_to_uint - function binary no to unsigned int
 * @b: pointer to a sting of 0 and 1 chars
 * Return: 1 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, mul = 1;
	int len = 0;

	if (b != '\0')
	{
		while (b[len])
			len++;
		for (len -= 1; len >= 0; len--)
		{
			if (b[len] != 0 && b[len] != 1)
				return (0)
			a += (b[len] - '0') * mul;
			mul *= 2;
			return (a);
		}
	}
	else
		return (0);
}
