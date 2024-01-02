#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string for which we are finding out the length of
 * Return: 0(success)
 */
int _strlen(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
