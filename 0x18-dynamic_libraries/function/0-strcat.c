#include "main.h"
/**
 * *_strcat - concactenates two strings
 * @dest: string to be appended the src
 * @src: the string to be added to dest
 * Return: dest(success)
 */
char *_strcat(char *dest, char *src)
{
        int i;
        int srclength = 0;
        int destlength = 0;

        for (i = 0; src[i] != '\0'; i++)
                srclength++;
        for (i = 0; dest[i] != '\0'; i++)
                destlength++;
        for (i = 0; i <= srclength; i++)
        {
                dest[destlength + i] = src[i];
        }
        return (dest);
}
