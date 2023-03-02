#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int col, row;
	int **doublePtr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	doublePtr = malloc(height * sizeof(int *));

	if (doublePtr == NULL)
	{
		return (NULL);
	}
	col = 0
	while (col < height)
	{
		doublePtr[col] = malloc(width * sizeof(int));

		if (doublePtr[col] == NULL)
		{
			for (col = 0; col < height; col++)
				free(doublePtr[col]);

			free(doublePtr);
			return (NULL);
		}

		for (row = 0; row < width; row++)
		{
			doublePtr[col][row] = 0;
		}
		col++;
	}
		return (doublePtr);
}
