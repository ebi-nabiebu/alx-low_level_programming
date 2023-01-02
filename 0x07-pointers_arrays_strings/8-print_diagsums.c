#include "main.h"

/**
 * print_diagsums - This function prints the sum of the 2 diagonals...
 *
 * @a: Pointer
 *
 * @size: Matrix Column size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int ea, eb, ec;
int eo, ep;

eo = 0;
ep = 0;

for (ea = 0; ea < size; ea++)
{
	ec = (ea * size) + ea;
	eo += *(a + ec);
}
for (eb = 0; eb < size; eb++)
{
	ec = (eb * size) + (size - 1 - eb);
	ep += *(a + ec);
}
printf("%i, %i\n", eo, ep);
}
