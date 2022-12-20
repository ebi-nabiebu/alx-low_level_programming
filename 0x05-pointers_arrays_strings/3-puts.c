#include "main.h"

/**
 * _puts - This function that prints a string, ... to stdout.
 * @str: String
 *
 * Return: String length followed by a new line.
 */
void _puts(char *str)
{
int eb = 0;

while (str[eb] != '\0')
{
_putchar(str[eb]);
eb++;
}
_putchar('\n');
}
