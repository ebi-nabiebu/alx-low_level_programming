#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 *
 * @s: String s
 *
 * @accept: String accept
 *
 * Return: Pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
int eb;
	while (*s)
	{
		for (eb = 0; accept[eb]; eb++)
		{
			if (*s == accept[eb])
				return (s);
		}
		s++;
	}
return (NULL);
}
