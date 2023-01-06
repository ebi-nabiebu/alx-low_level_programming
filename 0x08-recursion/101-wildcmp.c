#include "main.h"

/**
 * exam_str - This function ascertains if the strings are the same.
 *
 * @s1: Address 1.
 *
 * @s2: Address 2.
 *
 * @eb: Index - Left.
 *
 * @ef: Index - Control.
 *
 * Return: 1 or 0.
 */

int exam_str(char *s1, char *s2, int eb, int ef)
{
if (s1[eb] == '\0' && s2[ef] == '\0')
return (1);
if (s1[eb] == s2[ef])
return (exam_str(s1, s2, eb + 1, ef + 1));
if (s1[eb] == '\0' && s2[ef] == '*')
return (exam_str(s1, s2, eb, ef + 1));
if (s2[ef] == '*')
return (exam_str(s1, s2, eb + 1, ef) || exam_str(s1, s2, eb, ef + 1));
return (0);
}

/**
 * wildcmp - This functions ascertains if the strings are identical.
 *
 * @s1: Address 1.
 *
 * @s2: Address 2.
 *
 * Return: 1 if Strings are identical.
 */

int wildcmp(char *s1, char *s2)
{
return (exam_str(s1, s2, 0, 0));
}
