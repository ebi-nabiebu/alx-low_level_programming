#include "main.h"
/**
 * main -A program that prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{

char alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}

_putchar('\n');
return (0);
}

