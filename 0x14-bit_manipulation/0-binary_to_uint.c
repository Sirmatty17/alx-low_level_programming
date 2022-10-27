#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int len, converted;

	if (!b)
		return (0);
	unint = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, converted = 1; len >= 0; len--, converted += 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			unint += converted;
		}
	}
	return (unint);
}

