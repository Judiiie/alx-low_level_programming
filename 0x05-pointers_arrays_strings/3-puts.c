#include "main.h"

/**
 * _puts - Print the string, and a new line after the str
 * @str: String taken by function as the parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
