#include "main.h"

/**
 * _memcpy - This function copies memory area.
 *
 * @n: Number of bytes
 *
 * @src: Source Memory Area
 *
 * @dest: Destination Memory Area
 *
 * Return: A Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int eb = 0;

while (eb < n)
{
dest[eb] = src[eb];
eb++;
}

return (dest);
}
