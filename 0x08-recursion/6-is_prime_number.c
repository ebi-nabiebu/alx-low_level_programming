
#include "main.h"

/**
 * check - This function examines n
 *
 * @ef: exam value
 *
 * @eg: exam value
 *
 * Return: exam
 */
int exam(int ef, int eg)
{
	if (eg < 2 || eg % ef == 0)
		return (0);
	else if (ef > eg / 2)
		return (1);
	else
		return (exam(ef + 1, eg));
}

/**
 * is_prime_number - This function returns 1 if the input int is a prime no.
 *
 * @n:int
 *
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (exam(2, n));
}
