#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string taken by the function
 * Return: string with capital letters
 */

char *cap_string(char *s)
{
	char c[] = {32, 9, '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}'};
	int i, l = 13, ind = 0;

	while (s[ind])
	{
		i = 0;
		while (i < l)
		{
			if ((ind == 0 || s[ind - 1] == c[i]) && (s[ind] >= 97 && s[ind] <= 122))
				s[ind] = s[ind] - 32;
			i++;
		}
		ind++;
	}
	return (s);
}
