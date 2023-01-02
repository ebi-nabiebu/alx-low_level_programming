#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring.
 *
 * @s: Character
 *
 * @accept: Character
 *
 * Return: Number of Bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int eb, ee, ef;

ef = 0;
for (eb = 0; s[eb] != '\0'; eb++)
{
	if (s[eb] != 32)
	{
		for (ee = 0; accept[ee] != '\0'; ee++)
		{
			if (s[eb] == accept[ee])
				ef++;
		}
	}
	else
		return (ef);
}
return (ef);
}
