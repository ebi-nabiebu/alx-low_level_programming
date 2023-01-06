
#include "main.h"

/**
 * exam - This function examines the square root
 *
 * @ef: exam value
 *
 * @eg: exam value
 *
 * Return: integer
 */

int exam(int ef, int eg)

{
	if (ef * ef == eg)
		return (ef);
	if (ef * ef > eg)
		return (-1);
	return (exam(ef + 1, eg));
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n: The number.
 *
 * Return: The Natural Sq root of n, or -1 if ...
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (exam(1, n));
}
