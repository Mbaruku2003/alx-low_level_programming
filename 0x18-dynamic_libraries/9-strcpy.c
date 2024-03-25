#include "main.h"
/**
 * *_strcpy - copies the string pointed to
 * @src: source of the string
 * @dest: destination of the string plus null byte
 * Return: (0)
 */
char *_strcpy(char *dest, char *src)
{
        int i = 0;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        dest[i] = '\0';
                return (dest);
}
