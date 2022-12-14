#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: is the char to check for lowercase
 * Return: 0 if not lowercase, otherwise 1
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
