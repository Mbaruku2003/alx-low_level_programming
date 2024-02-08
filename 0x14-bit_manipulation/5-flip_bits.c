#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped
 * @n: the first integer
 * @m: the second number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b;
	int count = 0;
	unsigned long int cu;
	unsigned long int Ex = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		cu = Ex >> b;
		if (cu & 1)
			count++;
	}
	return (count);
}
