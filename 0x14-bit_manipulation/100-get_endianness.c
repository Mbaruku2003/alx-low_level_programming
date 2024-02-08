#include "main.h"
/**
 * get_endianness - checks endianess
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int b;
	char *c;

	b = 1;
	c = (char *) &b;
	return (*c);
}
