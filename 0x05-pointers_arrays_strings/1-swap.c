#include "main.h"
/**
 * swap_int -function that swap two integers
 * @a: the first parameter that is taken
 * @b: the second parameter that is taken
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;

}
