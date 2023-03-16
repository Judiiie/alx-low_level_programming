#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Pointer to a newly allocated memory
 * @str: string to be copied into the allocated memory
 * Return: NULL if str = NULL or memory unavailable
 */
char *_strdup(char *str)
{
	char *sPtr;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	sPtr = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (sPtr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		sPtr[i] = str[i];

	return (sPtr);

}
