#include "main.h"

/**
 *_puts - print a string followed by a new line
 *@str: input string
 *Return: no return
 */

void _puts(char *str)
{
int count = 0;
 
while (count >= 0)
{
if (str[count] == '\0')
{
  
_puts('\n');
break;
}
_puts(str[count]);
count++;
}
}
	    
