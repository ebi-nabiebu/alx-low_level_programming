#include "main.h"

/**
 * _calloc - This function allocates memory for an array, using malloc.
 *
 * @nmemb: Memory for the Array.
 *
 * @size: Size Bytes
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ee;
	unsigned int eg;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ee = malloc(nmemb * size);
	if (ee == NULL)
		return (NULL);
	for (eg = 0; eg < (nmemb * size); eg++)
		ee[eg] = 0;
	return (ee);
}
