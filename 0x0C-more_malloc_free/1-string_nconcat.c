#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concactenates twostrings
 * @s1- first string
 * @s2: where n bytes are taken from
 * @n: the number of bytes being taken if >s2prints2
 * Retirn: POINTER || NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, k;
	size_t j;
	char *ptr;
	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != 0; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < j; k++)
		ptr[k + i] = s2[k];
	ptr[i + j] = '\0';
	return (ptr);
}
