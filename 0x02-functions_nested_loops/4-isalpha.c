#include "main.h"
/**
* _isalpha - checks for alphabetic characters,upper and lowercase
* @c: the char is a letter upper or lowercase
*
* Return: 1 if char letter is upper or lowercase, otherwiase 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
