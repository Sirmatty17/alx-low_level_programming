#include <stdio.h>

/**
 * main - prints its name followed by new line
 * @argc: number of command line
 * @argv: array hat contains the command line
 * Return: returns 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

