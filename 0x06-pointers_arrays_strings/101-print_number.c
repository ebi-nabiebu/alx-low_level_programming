#include "main.h"

/**
  * print_number - This function that prints an integer.
  *
  * @n: int Number
  *
  * Return: Nothing
  */

void print_number(int n)
{
	unsigned int ee;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	ee = n;

	if (ee / 10)
		print_number(ee / 10);

	_putchar(ee % 10 + '0');
}
