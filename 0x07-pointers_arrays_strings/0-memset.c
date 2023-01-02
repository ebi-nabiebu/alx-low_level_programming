#include "main.h"

/**
 * _memset - This function fills memory with a constant byte.
 *
 * @n: Bytes of the memory area pointed to by s
 *
 * @s: Pointer to the memory area
 *
 * @b: Constant byte
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int ee = 0;

while (ee < n)
{
	s[ee] = b;
	ee++;
}
return (s);
}
