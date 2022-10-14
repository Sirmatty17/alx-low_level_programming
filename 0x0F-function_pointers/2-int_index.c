#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * @array: input integer array
 * @Return: returns -1 if no element matches and
 * return -1 if size <= 0 for which cmp function does
 * not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

