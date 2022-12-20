#include "main.h"

/**
 * print_line - a function that draaws straight line on terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
  int ln;
  for (ln = 1; ln <= n; ln++)
	{
    _putchar('_');
  }
		_putchar('\n');
	}
  else (n <= 0)
	{
		_putchar('\n');
	}
}
