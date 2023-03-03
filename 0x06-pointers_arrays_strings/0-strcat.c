#include "main.h"

/**
 * _strcat - Concatinating
 * @dest: First parameter
 * @src: Second parameter
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return (dest);
}
