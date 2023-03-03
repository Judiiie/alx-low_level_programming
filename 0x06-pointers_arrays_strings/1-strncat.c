#include "main.h"

/**
 * _strncat - Function to concatinate two strings
 * @dest: First string taken into the function
 * @src: Second string taken into the function with n len
 * @n: The size of the src memory address
 * Return: dest, a concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, c;

	l = 0;
	c = 0;

	while (dest[c++])
		l++;

	c = 0;
	while (c < n && src[c])
	{
		dest[l++] = src[c];
		c++;
	}
	return (dest);
}
