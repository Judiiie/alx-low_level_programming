#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: The length of Astr
 */
int _strlen(char *s)

{
	int l = 0;
	
	while (*s != '\0')
	{
		l = l + 1;
		s++;
	}

	return (l);
}
