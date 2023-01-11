#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments of my program.
 *
 * @av: Vector
 * @ac: Count
 *
 * Return: Pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int eb, ec, ef, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (eb = 0; eb < ac; eb++)
	{
		s = av[eb];
		ec = 0;

		while (s[ec++])
			size++;
		size++;
	}

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);

	for (eb = 0, ec = 0; eb < ac && ec < size; eb++)
	{
		s = av[eb];
		ef = 0;

		while (s[ef])
		{
			str[ec] = s[ef];
			ef++;
			ec++;
		}
		str[ec++] = '\n';
	}
	str[ec] = '\0';

	return (str);
}
