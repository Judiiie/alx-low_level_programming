#include "main.h"

/**
 * print_number - Output an integer
 * @n:  for outputed int value
 */

void print_value(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value = -(value);
	}

	if ((value / 10) > 0)
		print_value(value / 10);
	_putchar((value % 10) + '0');
}
