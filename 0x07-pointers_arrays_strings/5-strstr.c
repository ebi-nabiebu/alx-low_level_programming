#include "main.h"

/**
 * _strstr - This function locates a substring.
 *
 * @needle: Substring to locate.
 *
 * @haystack: String to search.
 *
 * Return: Pointer to the beginning of located substring, or Null not found.
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int eb, ee;

eb = 0;
ee = 0;
while (haystack[eb])
{
	while (needle[ee] && (haystack[eb] == needle[0]))
	{
		if (haystack[eb + ee] == needle[ee])
			ee++;
		else
			break;
	}
	if (needle[ee])
	{
		eb++;
		ee = 0;
	}
	else
		return (haystack + eb);
}
return (0);
}
