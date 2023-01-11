#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space ...
 * ...in memory, which contains a copy of the string given as a parameter.
 *
 * @str: Source String
 *
 * Return: Pointer to the duplicated string. And NULL if ...
 * ...insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}