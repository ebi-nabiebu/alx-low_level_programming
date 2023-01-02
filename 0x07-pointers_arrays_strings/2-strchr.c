#include "main.h"

/**
 * _strchr - This function locates a character in a string.
 *
 * @c: Character to locate
 *
 * @s: String
 *
 * Return: Pointer to the first occurrence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	return (s);

return (NULL);
}
