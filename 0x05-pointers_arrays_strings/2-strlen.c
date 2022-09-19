#include "main.h"

/**
 *_strien- Finds the length of a string
 *@s: String pointer to the string whose length is to be found
 *Return: returns the length of the string
 */

int _strien(char *s)
{
int p = 0;
while (*(s + p) != 0)
{
p++;
}
return (p);
}
