#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int fs1, fs2, foutput, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (fs1 = 0; s1[fs1] != '\0'; fs1++)
		;
	for (fs2 = 0; s2[fs2] != '\0'; fs2++)
		;
	if (n > fs2)
		n = fs2;
	foutput = fs1 + n;
	output = malloc(foutput + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < foutput; i++)
		if (i < fs1)
			output[i] = s1[i];
		else
			output[i] = s2[i - fs1];
	output[i] = '\0';

	return (output);
}

