#include "main.h"

/**
 * _strncat - This function that concatenates two strings.
 *
 * @dest: Destination String
 * @src: Source String
 * @n: int Length
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int eb, ee;

	for (eb = 0; dest[eb] != '\0'; eb++)
	{
		continue;
	}
	for (ee = 0; src[ee] != '\0' && ee < n; ee++)
	{
		dest[eb + ee] = src[ee];
	}
	dest[eb + ee] = '\0';
	return (dest);
}
