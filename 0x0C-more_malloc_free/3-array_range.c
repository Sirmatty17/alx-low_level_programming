#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *value;
	int i;

	if (min > max)
		return (NULL);
	value = malloc(sizeof(*value) * ((max - min) + 1));

	if (value == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		value[i] = min;
	return (value);
}

