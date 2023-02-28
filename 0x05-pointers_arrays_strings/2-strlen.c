#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 * Return: The length of Astr
 */
int _strlen(char *s)

{
        int ln = 0;

	while (*s != '\0')
	{
		ln = ln + 1;
		s++;
	}

	
	return (ln);
}
