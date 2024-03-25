#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string for which we are finding out the length of
 * Return: length(success)
 */
int _strlen(char *s)
{
        int a;
        int b = 0;

        for (a = 0; s[a] != '\0'; a++)
                b++;
        return (b);
}
