#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int o;
	long int u;
	long long int t;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of afloat: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
