#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: the constant byte to be filled within the memory
 * @n: first bytes of s to be filled in the memory
 * Return: s(success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
