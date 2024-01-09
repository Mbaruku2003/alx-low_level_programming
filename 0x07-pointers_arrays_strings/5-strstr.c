#include "main.h"
#include <stddef.h>
/**
 * *_strstr -  locates a substring at its first occurence
 * @haystack: where the search is to be done
 * @needle: the substring being searched for
 * Return: needle else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{ 
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[i] == haystack[i])
				return (needle);
		}
	}
	return (NULL);
}
