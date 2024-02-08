#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: set number
 * @index: the index to set number
 * Return: 1 if success or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int get;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	get = 1 << index;
	*n = *n | get;
	return (1);
}
