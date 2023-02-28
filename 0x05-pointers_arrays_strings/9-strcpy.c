#include "main.h"

/**
 * char *-strcpy - Function copies the point from string
 * @dest: String is copied into this pointer
 * @src: String is copied from pointer
 * Return: Function returns a string copy
 */
char *-strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
