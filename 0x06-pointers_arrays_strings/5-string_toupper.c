#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: String
 * Return: Character value.
 */
char *string_toupper(char *s)
{

	int eb;

eb = 0;
while (*(s + eb))
{
if (*(s + eb) >= 'a' && *(s + eb) <= 'z')
*(s + eb) -= 'a' - 'A';
eb++;
}
return (s);
}
