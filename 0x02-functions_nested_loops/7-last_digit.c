#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @m: number to be printed for the last digit
 * Return: m (success)
 */
int print_last_digit(int m)
{
	int k;

	k = m % 10;
	if (m < 0)
	{
		k = k * -1;
	}
	return (k);
}
