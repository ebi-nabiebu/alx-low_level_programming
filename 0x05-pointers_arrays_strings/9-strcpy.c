#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: The Src Character
 * @dest: The Destination Character
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int e;

for (e = 0; src[e] != '\0'; e++)
dest[e] = src[e];
dest[e] = '\0';
return (dest);
}
