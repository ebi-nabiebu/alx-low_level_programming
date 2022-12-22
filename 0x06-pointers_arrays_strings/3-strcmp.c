#include "main.h"

/**
* _strcmp - This function compares two (2) strings.
*
* @s1: String 1
* @s2: String 2
* Return: Negative, Zero or Positive value
*/

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
{
	s1++;
	s2++;
}

	if (*s1 == *s2)
	{
	return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
