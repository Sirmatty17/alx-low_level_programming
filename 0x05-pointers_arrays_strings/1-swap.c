#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *@a: First argument to be swapped
 *@b: Second argument to be swapped
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
