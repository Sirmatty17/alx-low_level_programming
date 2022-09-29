#include "main.h"

/**
 * square_root - find natural square root of a number
 * @n: number to be checked
 * @j: iterator
 * Return: returns -1 or square root of the number
 */

int square_root(int n, int j)
{
	if (j % (n / j) == 0)
	{
		if (j * (n / j) == n)
			return (j);
		else
			return (-1);
	}
	return (0 + square_root(n, j + 1));
}
/**
 * _sqrt_recursion - find natural square root of a number
 * @n: the number
 * Return: returns natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root(n, 2));
}

