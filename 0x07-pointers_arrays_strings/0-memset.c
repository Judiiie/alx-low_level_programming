#include "main.h"

/**
 * *_memset - entry point
 * @s: pointer to put the constant
 * @b: constant byte
 * @n: bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
