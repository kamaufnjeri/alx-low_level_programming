#include <stdio.h>

/**
 * main - ..
 * Return: ..
 */
int alpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return 0;
}
int main(void)
{
	char c;

	c = 'Z';
	printf("%c : is %d\n", c, alpha(c));
	c = 'z';
	printf("%c : is %d\n", c, alpha(c));
	return (0);
}
