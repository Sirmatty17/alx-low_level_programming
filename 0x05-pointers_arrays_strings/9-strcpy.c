#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string pointed to by str
 * including the terminating null byte
 * buffer pointed to by dest
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		       if (*(src + count) == '\0')
			       break;
		count++;
		
	}
	return (dest);
}




