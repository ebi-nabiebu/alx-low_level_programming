#include "main.h"

/**
* leet - This function that encodes a string into 1337.
* @s: The String
* Return: S Address.
*/
char *leet(char *s)
{
int i, j;
char ee[] = "aAeEoOtTlL";
char ef[] = "4433007711";

for (i = 0; *(s + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (ee[j] == s[i])
s[i] = ef[j];
}
}
return (s);
}
