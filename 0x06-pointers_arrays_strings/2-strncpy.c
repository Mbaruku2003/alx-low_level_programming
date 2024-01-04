#include "main.h"
/**
 * *_strncpy - copies a string
 * @src: string to be copied
 * @dest: where the string is to be copied
 * @n: index
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
