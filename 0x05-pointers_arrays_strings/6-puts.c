 #include "main.h"
  2
  3 /**
  4  * puts2 - even index character of the str
  5  * @str: pointer 
  6  */
  7
  8 void puts2(char *str)
  9 {
 10         int l = 0, i = 0, j;
 11         char *str_value = str;
 12
 13         while (*str_value != '\0')
 14         {
 15                 str_value++;
 16                 l++;
 17         }
 18         i =  l - 1;
 19         for (j = 0; j <= i; j++)
 20         {
 21                 if (j % 2 == 0)
 22                         _putchar(str[j]);
 23         }
 24         _putchar('\n');
 25 }
