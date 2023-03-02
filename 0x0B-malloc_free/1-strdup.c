#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	for (index = 0; str[index]; index++)
		len++;
	if (*str == '\0')
		return (NULL);
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < len; index++)
	{
		dup[index] = str[index];
	}
	dup[len] = '\0';
	return (dup);
}
