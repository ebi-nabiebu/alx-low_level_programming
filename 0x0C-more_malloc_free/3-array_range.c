#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This function creates an array of integers.
 *
 * @min: Minimum Value (included)
 * @max: Maximum Value (included)
 *
 * Return: Pointer to a newly created array.
 */

int *array_range(int min, int max)
{
	int size;
	int ee;
	int *pointr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointr = malloc(sizeof(int) * size);

	if (pointr == NULL)
		return (NULL);

	for (ee = 0; min <= max; ee++)
		pointr[ee] = min++;

	return (pointr);
}
