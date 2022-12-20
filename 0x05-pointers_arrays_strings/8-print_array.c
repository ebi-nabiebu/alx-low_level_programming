#include <stdio.h>
#include "main.h"

/**
 * print_array - This function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: The Array of Integers
 * @n: The number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int eb;

for (eb = 0; eb < n; eb++)
if (eb != n - 1)
printf("%d, ", a[eb]);
else
printf("%d", a[eb]);
printf("\n");
}
