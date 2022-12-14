#include "main.h"
/**
 * print_alphabet_x10 -A program that prints the alphabet in lowercase.
 *
 */

void print_alphabet_x10(void)
{

char alpha = 'a';
int i;

for (i = 0; i <= 9; i++)
{
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}

_putchar('\n');
}
}
