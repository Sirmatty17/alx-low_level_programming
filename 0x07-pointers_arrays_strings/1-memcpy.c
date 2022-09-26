#include "main.h"

/**
 * _memcpy - to copy bytes
 * @n: bytes to be copied
 * @src: source of the memoory area
 * @dest: destination of memory area
 *Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

