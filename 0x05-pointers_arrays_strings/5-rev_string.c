#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to be modified
 */

void rev_string(char *s)
{
        int i, count = 0;
        char rev_s = s[0]

        while (s[count] != '\0')
            count++;

        for (i = 0; i; < count; i++)
        {
            count--;
            rev_s = s[count];
            s[count] = rev_s;
        }
};
	}
}
