#include "main.h"

/**
 * _strncpy - This function copies a string.
 * @dest: Destination
 * @src: Source
 * @n: int Length
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && *(src + count); count++)
	{
		*(dest + count) = *(src + count);
	}
	for (; count < n; count++)
	{
		*(dest + count) = '\0';
	}
	return (dest);

}
