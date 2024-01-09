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
	for (; *haystack != '\0'; haystack++)
	{
		char *left = haystack;
		char *right = needle;

		while (*left == *right && *right != '\0')
		{
			left++;
			right++;
		}

		if (*right == '\0')
			return (haystack);
	}
	
	return (NULL);
}
