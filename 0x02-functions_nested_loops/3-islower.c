#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the int value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
