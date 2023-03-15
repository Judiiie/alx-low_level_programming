#include "main.h"

/**
 * _isupper - Check if the letter is an uppercase
 * @c: character to be checked
 *
 *Return: The value 1 or 0 is returned
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
