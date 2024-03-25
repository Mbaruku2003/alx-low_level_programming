#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: where the bytes of accept will be searched
 * @accept: where the program will take the bytes from
 * Return: s else NULL
 */
char *_strpbrk(char *s, char *accept)
{
        while (*s != '\0')
        {
                const char *a = accept;

                while (*a != '\0')
                {
                        if (*s == *a)
                                return (s);
                        a++;
                }
                s++;
        }
        return (NULL);
}
