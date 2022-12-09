#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lstdig = n % 10;
	if (lstdig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdig);
	else if (lstdig == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstdig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lstdig);
	return (0);
}
