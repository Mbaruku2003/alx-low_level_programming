#include "main.h"
/**
 * *leet -  encodes a string into 1337
 * @n: string being encoded
 * Return: n(succcess)
 */
char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
