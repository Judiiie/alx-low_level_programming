#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - sets the first count bytes of *s to the value b
 * @s: string counted by the function
 * @b: is converted to an unsigned character
 * @n: unsigned int
 * Return: a pointer to *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
