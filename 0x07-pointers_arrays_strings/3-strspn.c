#include "main.h"
/**
 * _strspn - gets the length of a prefix substrin
 * @s: initial segment which only of bytes from accept
 * @accept: where n will come from
 * Return: (0);
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}
