#include "main.h"

/**
 * char *-strcpy - Function copies the point from string
 * @dest: String is copied into this pointer
 * @src: String is copied from pointer
 * Return: Function returns a string copy
 */
char *-strcpy(char *dest, char *src)
{       
        int ln = 0, i;

        while (*(src + ln) != '\0')
        {
                ln++
        }
        
        for (i = 0; i < ln; i++)
        {
                dest[i] = src[i];
        }
        dest[ln] = '\0';
        
        return(dest);
}
