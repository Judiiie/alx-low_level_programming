#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to be modified
 */

void rev_string(char *s)
{
        int i, counter = 0;
        char rev_string = s[0];

        while (s[counter] != '\0')
		counter++;
	
	for (i = 0; i; < counter; i++)
        {
		counter--;
		rev_string = s[counter];
		s[counter] = rev_s;
        }
}
