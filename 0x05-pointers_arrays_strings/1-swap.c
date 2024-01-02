#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: swapped to @b
 * @b: swapped to @a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
