#include "main.h"
/**
 * puts_half - This function that prints half of a string,
 * followed by a new line.
 * @str: The Character
 * Return: Always 0.
 */
void puts_half(char *str)
{

int eb, string = 0;

while (str[string] != '\0')
string++;
if (string + 1 % 2 != '0')
eb = (string - 1) / 2;
else
eb = (string / 2);
eb++;

for (string = eb; str[string] != '\0'; string++)
_putchar(str[string]);
_putchar('\n');
}
