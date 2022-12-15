#include "main.h"

/**
 * times_table - This function prints the 9 times table,
 *               starting with 0.
 */
void times_table(void)
{
	int no, mul, product;

	for (no = 0; no <= 9; no++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			product = no * mul;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
