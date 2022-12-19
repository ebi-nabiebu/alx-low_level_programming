#include "main.h"
/**
 * _strlen - This function that returns the length of a string.
 * @s: character
 * Return: Always 0
 */
int _strlen(char *s)
{
int ebi = 0;

for (; *s++;)
ebi++;
return (ebi);
}
