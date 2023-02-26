#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int i;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		k = rand() % 128;
		if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 35 && k <= 37) || k == 64)
		{
			printf("%c", k);
		}
		else
		{
			i--;
		}
	}
	printf("\n");
	return (0);
}
