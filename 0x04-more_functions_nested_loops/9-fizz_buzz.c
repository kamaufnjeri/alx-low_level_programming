#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints 1-100
 * if it is a multiple of three print Fizz
 * if it is a multiple of 5 print Buzz
 * if it si a multiple of both 3 or 5 print FizzBuzzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
