#include <stdio.h>
/**
 * main -A program that prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{

char alpha = 'a';
char alpha2 = 'A';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}

while (alpha2 <= 'Z')
{
putchar(alpha2);
alpha2++;
}

putchar('\n');
return (0);
}
