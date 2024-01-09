#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the variable
 * @size: the other variable
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int n;
	int sumone = 0;
	int sumtwo = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sumone = sumone + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sumtwo = sumtwo + a[n];
	printf("%d, %d\n", sumone, sumtwo);
}
