#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer of an array
 */

char *str_concat(char *s1, char *s2)
{
	char *output;
	unsigned int a, b, c, range;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	output = malloc(sizeof(char) * (a + b + 1));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		output[c] = s1[c];

	range = b;
	for (b = 0; b <= range; c++, b++)
		output[c] = s2[b];
	return (output);
}

