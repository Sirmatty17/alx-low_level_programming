#include "main.h"

/**
 * _strstr- finds the first occurrence of the substring
 * @haystack: the entire string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *the_haystack;
	char *the_needle;

	while (*haystack != '\0')
	{
		the_haystack = haystack;
		the_needle = needle;

		while (*haystack != '\0' && *the_needle != '\0' && *haystack == *the_needle)
		{
			haystack++;
			the_needle++;
		}
		if (!the_needle)
			return (the_haystack);
	}
	return (0);
}


