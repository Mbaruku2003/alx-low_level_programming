#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * , which contains a copy of the string given as a parameter.
 * @str: the string given as parameter
 * Return: NULL if string is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
 }
