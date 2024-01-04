#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings.
 * @dest: resulting string
 * @src: string to be concactinated of n chars
 * @n: bytes from src to be concactinated
 * Return: dest(success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int strlength = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[strlength + i] = src[i];
		src++;
	}
	dest[strlength + i] = '\0';
	return (dest);
}
