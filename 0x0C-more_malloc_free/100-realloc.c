#include "main.h"

/**
 * _realloc - This fxn reallocates a memory block using malloc and free.
 *
 * @ptr: A Pointer to the memory previously allocated with a call to malloc.
 *
 * @old_size: The size of the allocated space for ptr.
 *
 * @new_size: The new size of the new memory block.
 *
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int ee, new = new_size;
	char *oldpoint = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
		return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	if (new_size > old_size)
		new = old_size;
	for (ee = 0; ee < new; ee++)
		point[ee] = oldpoint[ee];
	free(ptr);
	return (point);
}
