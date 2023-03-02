#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *temp;
	int index, tempindex = 0, len = 0;

	if (s1 == NULL)
        s1 = "";
        if (s2 == NULL)
                s2 = "";
        while (s1[len] || s2[len])
		len++;
	temp = malloc(sizeof(char) * (len));
	if (temp == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
	{
		temp[tempindex++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		temp[tempindex++] = s2[index];
	}
	temp[len] = '\0';
	return (temp);
}
