#include "main.h"

/**
 * string_nconcat - This function concatenates two strings.
 *
 * @s1: The 1st Character.
 * @s2: The 2nd Character.
 *
 * @n: Unsigned Integer.
 * Return: NULL, If the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ea, eb, ef;
	char *s;

	if (s1 == NULL)
	{
		ea = 0;
	}
	else
	{
		for (ea = 0; s1[ea]; ++ea)
		;
	}
	if (s2 == NULL)
	{
		eb = 0;
	}
	else
	{
		for (eb = 0; s2[eb]; ++eb)
		;
	}
	if (eb > n)
		eb = n;
	s = malloc(sizeof(char) * (ea + eb + 1));
	if (s == NULL)
		return (NULL);
	for (ef = 0; ef < ea; ef++)
		s[ef] = s1[ef];
	for (ef = 0; ef < eb; ef++)
		s[ef + ea] = s2[ef];
	s[ea + eb] = '\0';
	return (s);
}
