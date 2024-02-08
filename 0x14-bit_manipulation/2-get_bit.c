#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index starting from zero
 * @n: the number
 * Return: the value of the bit at index -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, c;

	if (index > sizeof(unsigned long int) * 8 - 1)
	return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}
