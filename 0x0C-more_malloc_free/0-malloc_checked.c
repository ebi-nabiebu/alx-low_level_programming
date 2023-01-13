#include "main.h"

/**
 * malloc_checked - This function memory using malloc. And if malloc fails,...
 * ...causes a normal process termination with a status value of 98.
 *
 * @b: Memory
 *
 * Return: Pointer to the Allocated Memory.
 *
 */

void *malloc_checked(unsigned int b)
{
void *ee;

	ee = malloc(b);
	if (ee == NULL)
		exit(98);
	return (ee);
}
