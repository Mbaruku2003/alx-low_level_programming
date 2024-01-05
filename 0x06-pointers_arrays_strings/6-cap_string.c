#include "main.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @n: string being capitalised
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '0' ; i++)
	{
		if (n[i] == 32 ||
			n[i] == '\t' ||
			n[i] == '\n' ||
			n[i] == 44 ||
			n[i] == 59 ||
			n[i] == 46 ||
			n[i] == 33 ||
			n[i] == 63 ||
			n[i] == ' "' ||
			n[i] == 40 ||
			n[i] == 41 ||
			n[i] == 123 ||
			n[i] == 125)
		{
			n[i] += 33;
		}
	}
	return (0);
}
