#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	char l;
	float m;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));

	return (0);
}
