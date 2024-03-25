#include "main.h"
/**
 * *_memcpy -  copies memory area
 * @src: where n bytes from src are copied from
 * @dest: where n bytes of src are copied to
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;
        unsigned int srclength = 0;
        int destlength = 0;

        for (i = 0; src[i] != '\0'; i++)
                srclength++;
        for (i = 0; dest[i] != '\0'; i++)
                destlength++;
        for (i = 0; i < n && i <= srclength; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
