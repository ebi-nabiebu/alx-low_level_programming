#include "main.h"
/**
 * reverse_array -This function reverses the content of an array of integers.
 *
 * @a: Array
 * @n: int value
 *
 * Return: nothing.
 */

void reverse_array(int *pointer, int n)
{
int eb, c;

for (eb = 0; (eb < (n - 1) / 2); eb++)
{
	c = pointer[eb];
	pointer[eb] = pointer[n - 1 - eb];
	pointer[n - 1 - eb] = c;
}
}
