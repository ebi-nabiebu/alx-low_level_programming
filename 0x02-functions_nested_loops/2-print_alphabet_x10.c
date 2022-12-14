#include "main.h"
/**
 * print_alphabet_x10 -A program that prints the alphabet in lowercase.
 *
 */

void print_alphabet_x10(void)
{

char alpha = 'a';
int count;

for (count = 0; count <= 9; count ++)
{
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}

_putchar('/n');
}
}
