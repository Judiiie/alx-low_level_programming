#include "main.h"

/**
 * *string_toupper - Converts strings to uppercase
 * @s: String parameter pointer
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int ln = 0;

	while (s[ln])
	{
		if (s[ln] >= 97 && s[ln] <= 122)
			s[ln] = s[ln] - 32;
		ln++;
	}

	return (s);
}
