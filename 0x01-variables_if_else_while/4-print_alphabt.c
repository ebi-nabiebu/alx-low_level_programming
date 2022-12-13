#include <stdio.h>
/**
 * main -A program that prints the alphabet in lowercase
 * except q and e
 * Return: 0
 */
int main(void)
{

char alpha = 'a';

while (alpha <= 'z')
{
if ((alpha != 'e' && alpha != 'q') && alpha <= 'z')
putchar(alpha);
alpha++;
}

putchar('\n');
return (0);
}
