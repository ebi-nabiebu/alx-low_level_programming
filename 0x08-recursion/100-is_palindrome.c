#include "main.h"

/**
 * _strlen_recursion - This function prints the length of the String.
 *
 * @s: String
 *
 * Return: The Length of The String.
 */

int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}

/**
 * exam - This function ascertains if s is a palindrome.
 * @s: Address
 *
 * @eb: Index - Left.
 *
 * @eg: Index - Right.
 *
 * Return: 1 or 0 if s is a palindrome or otherwise respectively.
 */

int exam(char *s, int eb, int eg)
{
if (s[eb] == s[eg])
if (eb > eg / 2)
return (1);
else
return (exam(s, eb + 1, eg - 1));
else
return (0);
}

/**
 * is_palindrome - This function returns 1 if a string is a palindrome, or 0.
 *
 * @s: Address
 *
 * Return: 1 or 0 if n is prime or otherwise respectively.
 */

int is_palindrome(char *s)
{
return (exam(s, 0, _strlen_recursion(s) - 1));
}
