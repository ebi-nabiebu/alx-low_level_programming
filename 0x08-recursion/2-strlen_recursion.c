#include "main.h"

/**
 * _strlen_recursion - This function returens the length of string.
 *
 * @s: The string
 * Return: The length of the Stirng.
 *
 */

int _strlen_recursion(char *s)
{
int ef;

ef = 0;

if (*s)
	{
	ef++;
	ef += _strlen_recursion(s + ef);
	}
return (ef);
}
