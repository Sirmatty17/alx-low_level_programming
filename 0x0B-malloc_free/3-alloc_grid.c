#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a ponter to 2-dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: returns NULL If width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);
	output = malloc(height * sizeof(int *));
	if (output == NULL)
	{
		free(output);
		return (output);
	}

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(width * sizeof(int));
		if (output[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(output[a]);
			free(output);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			output[a][b] = 0;

	return (output);
}

