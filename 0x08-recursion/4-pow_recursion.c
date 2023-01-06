#include "main.h"

/**
 * _pow_recursion - This function returns the value of x raised to power y.
 * @x: The number x
 *
 * @y: The Power y
 *
 * Return: The Value, or -1 if y is lower than 0.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
