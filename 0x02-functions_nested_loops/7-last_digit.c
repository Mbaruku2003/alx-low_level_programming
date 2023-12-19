#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @m: number to be printed for the last digit
 * Return: m (success)
 */
int print_last_digit(int m)
{
	int type = m >= 0 ? 1 : -1;
	int last_digit = type * (n % 10);

	return (last_digit);
}
