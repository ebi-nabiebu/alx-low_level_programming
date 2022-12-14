#include "main.h"
/**
 * print_alphabet_x10 -A program that prints the alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{

char alpha = 'a';
int count;

while (count++ <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
alpha++;
_putchar('\n');
}
