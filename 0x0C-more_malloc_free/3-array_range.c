#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: input
 * @max: input
 * Return: output
 */
int *array_range(int min, int max)
{
	int *array, index;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	index = 0;
	wile (min <= max)
	{
		array[index++] = min++;
	}
	return (array);
}
