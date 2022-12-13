#include <stdio.h>
/**
 * main -A program that prints the lowercase alphabet in reverse.
 *
 * Return: 0
 */
int main(void)
{

char alpha = 'z';

while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
