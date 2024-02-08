#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1
 * Return: converted nuber or 0 if  is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		a <<=  1;
		if (b[i] == '1')
			a += 1;
	}
	return (a);
}
