#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = ac, index = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		i++;
	}
	s = malloc(sizeof(char *) * size + 1);
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[index++] = av[i][j];
		}
		s[index++] = '\n';
		i++;
	}
	s[size] = '\0';
	return (s);
}
