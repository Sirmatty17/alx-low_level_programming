#include "main.h"

/**
 *print_rev - to print a string in reverse followed by a nwe line
 *@s: input string
 *
 *Return: no rwturn
 */

void print_rev(char *s)
{
int count = 0;

while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
for (count--; count >= 0; count--)
_putchar(s[count]);
_putchar('\n');
}
