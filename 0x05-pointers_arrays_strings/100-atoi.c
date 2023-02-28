#include "main.h"


/**
 * _atoi - Function prints the string, and new 
 * @s: String taken by the function as the parameter
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sn = 1;
	unsigned int n = 0;

	do {
		if (*s == '_')
			sn = sn * (-1);
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sn);
}
