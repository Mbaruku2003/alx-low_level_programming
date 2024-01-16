#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string to be concactinated into the other string
 * @s2: the song to contain s1
 * Return: NUll on failure
 */
char *str_concat(char *s1, char *s2)
{
	char * ptr;
	int i;
	int s1length = 0;
	int s2length = 0;
	int k;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1length++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2length++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i <= s2length; i++)
	{
		s1[s1length + i] = s2[i];
	}
	k = s1length + s2length;
	ptr = (char *)malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < s1length; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= s2length; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
