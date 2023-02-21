#include <stdio.h>

/**
 * main - ..
 * Return: ..
 */
int digit(int a)
{
	if (a >= '0' && a  <= '9')
		return (1);
	else
		return (0);
}
int main(void)
{
	char c;

	c = '7';
	printf("%c is % d\n", c, digit(c));
	c = 'a';
	printf("%c is % d\n", c, digit(c));
	return (0);
}
