#include <stdio.h>

/**
 * main - prints its name followed by new line
 * @argc: number of command line
 * @argv: array hat contains the command line
 * Return: returns 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

