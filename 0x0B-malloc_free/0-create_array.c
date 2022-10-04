#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: storage of char
 * Return: returns a pointer to an array
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int i;

	if (size == 0)
		return (NULL);
	create = malloc(sizeof(c) * size);

	if (create == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		create[i] = c;

	return (create);
}

