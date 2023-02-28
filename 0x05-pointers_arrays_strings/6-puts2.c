 #include "main.h"

/**
 * puts2 - even index character of the str
 * @str: pointer 
 */

void puts2(char *str)
{
	int l = 0, i = 0, j;
        char *str_value = str;

        while (*str_value != '\0')
	{
		str_value++;
		l++;
	}
	i =  l - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
