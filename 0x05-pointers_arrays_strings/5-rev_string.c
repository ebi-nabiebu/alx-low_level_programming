#include "main.h"
/**
 * rev_string - This function that reverses a string.
 *
 * @s: The Character
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int eb = 0, ed, ee;
char chr;

while (s[eb] != '\0')
{
eb++;
}
ee = eb - 1;
for (ed = 0; ee >= 0 && ed < ee; ee--, ed++)
{
chr = s[ed];
s[ed] = s[ee];
s[ee] = chr;
}
}
