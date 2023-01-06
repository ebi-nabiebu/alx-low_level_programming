#include "main.h"

/**
 * factorial - This function returns the factorial of a given number.
 *
 * @n: The given number.
 *
 * Return: The factorial, or -1 if n is lower than 0.
 *
 */

int factorial(int n)
{

	int fact;

if (n == 0)
{
	return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
			return (fact);
}
