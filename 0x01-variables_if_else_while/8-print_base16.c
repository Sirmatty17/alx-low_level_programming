#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char lower_case;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (low = 'a'; lower_case <= 'f'; lower_case++)
		putchar(lower_case);
	putchar('\n');

	return (0);
}
