#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string being compared
 * @s2: another string being compared
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s2[i] - s1[i]);
			if (s2[i] < s1[i])
				return (s2[i] - s1[i]);
		}
	}
	return (0);
}
