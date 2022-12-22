#include "main.h"

/**
 * infinite_add - This function that adds two numbers.
 *
 * @n1: Number 1
 * @n2: Number 2
 * @r: Buffer that stores the result.
 * @size_r: Buffer Size.
 *
 * Return: 0 or r's Address
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ea, eb, ec, ed, m, n;

	for (ea = 0; n1[ea]; ea++)
		;
	for (eb = 0; n2[eb]; eb++)
		;
	if (ea > size_r || eb > size_r)
		return (0);
	m = 0;
	for (ea -= 1, eb -= 1, ec = 0; ec < size_r - 1; ea--, eb--, ec++)
	{
		n = m;
		if (ea >= 0)
			n += n1[ea] - '0';
		if (eb >= 0)
			n += n2[eb] - '0';
		if (ea < 0 && eb < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[ec] = n % 10 + '0';
	}
	r[ec] = '\0';
	if (ea >= 0 || eb >= 0 || m)
		return (0);
	for (ec -= 1, ed = 0; ed < ec; ec--, ed++)
	{
		m = r[ec];
		r[ec] = r[ed];
		r[ed] = m;
	}
	return (r);
}
