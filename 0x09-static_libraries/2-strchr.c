#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s: string in which c is to searched
 * @c: character to be searched for in the string
 * Return: first address of c else Null
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
