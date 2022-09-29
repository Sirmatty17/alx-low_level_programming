#include "main.h"
/**
 * check_prime - check if an input number is a prime number
 * @n: the number
 * @j: iterator
 * Return: return 1 if n is a prime number and
 * 0 if n is not a prime number
 */

int check_prime(unsigned int n, unsigned int j)
{
	if (n % j == 0)
	{
		if (n == j)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, j + 1));
}
/**
 * is_prime_number - check if an input number is a prime number.
 * @n: input number.
 * Return: return 1 if n is a prime number
 * and 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_prime(n, 2));
}

