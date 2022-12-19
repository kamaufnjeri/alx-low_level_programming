#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772, a = 0, b, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[a] = random;
		ascii -= random;
		a++;
	}
	if (ascii > 0)
		password[a] = ascii;
	else
	{
		a--;
	}
	

	for (b = 0; b <= a; b++)
	{
		printf("%c", password[b]);
	}
	return (0);
}
