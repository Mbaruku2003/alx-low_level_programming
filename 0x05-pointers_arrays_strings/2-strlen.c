#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string for which we are finding out the length of
 * Return: length(success)
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s++)
		if (*s != '\0')
		{
			length++;
		}
	return (length);
}
