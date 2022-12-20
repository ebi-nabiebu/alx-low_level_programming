#include "main.h"

/**
 * _atoi - This function that convert a string to an integer.
 * @s: s is the pointer
 *
 * Return: an integer value
 */
int _atoi(char *s)
{
int ebi = 0, low = 1, inte = 0;
unsigned int ites = 0;

while (s[ebi])
{
if (s[ebi] == 45)
{
low *= -1;
}

while (s[ebi] >= 48 && s[ebi] <= 57)
{
inte = 1;
ites = (ites * 10) + (s[ebi] - '0');
ebi++;
}

if (inte == 1)
{
break;
}

ebi++;
}

ites *= low;
return (ites);
}
