#include "main.h"

/**
* print_rev - This function that prints a string, in reverse.
*
* @s: The string
*
*/

void print_rev(char *s)
{
int eb;

int bi = 0;
while (s[bi] != '\0')
bi++;

for (eb = bi - 1; eb >= 0; eb--)
{
_putchar(s[eb]);
}
_putchar('\n');
}
