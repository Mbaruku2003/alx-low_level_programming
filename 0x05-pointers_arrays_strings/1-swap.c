# include <stdio.h>
/**
 * swap_int - swaps the two values of the integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Returning: nothing
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
	}
