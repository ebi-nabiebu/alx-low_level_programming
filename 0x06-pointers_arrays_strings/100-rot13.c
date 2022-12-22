#include "main.h"

/**
 * rot13 - This function that encodes a string using rot13.
 * @str: The String
 *
 * Return: String str Address
 */
char *rot13(char *str)
{
int m, n;
char ee[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ef[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(str + m); m++)
{
	for (n = 0; n < 52; n++)
	{
		if (ee[m] == *(str + m))
		{
			*(str + m) = ef[n];
			break;
		}
	}
}
return (str);
}
