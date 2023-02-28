include "main.h"

/**
 * print_rev - Function is printed in reverse
 * @s: Parameter of the function
 */
void print_rev(char *s)
{
	int i, ln = 0;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	s--;
	for (i = ln; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
