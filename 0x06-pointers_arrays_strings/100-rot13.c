#include "main.h"

/**
 * rot13 - This function that encodes a string using rot13.
 * @s: The String
 *
 * Return: String str Address
 */
char *rot13(char *s)
{
int m, n;
char ee[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ef[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(s + m); m++)
{
	for (n = 0; n < 52; n++)
	{
		if (ee[m] == *(s + m))
		{
			*(s + m) = ef[n];
			break;
		}
	}
}
return (s);
}
