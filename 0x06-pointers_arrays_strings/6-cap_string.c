#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @s: String
 * Return: An Address
 */
char *cap_string(char *s)
{
int eb, ee;
char ef[] = " \t\n,;.!?\"(){}";

eb = 0;
while (*(s + eb))
{
if (*(s + eb) >= 'a' && *(s + eb) <= 'z')
{
if (eb == 0)
*(s + eb) -= 'a' - 'A';
else
{
for (ee = 0; ee <= 12; ee++)
{
if (ef[ee] == *(s + eb - 1))
*(s + eb) -= 'a' - 'A';
}
}
}
eb++;
}
return (s);
}
