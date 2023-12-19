#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the last digit of a number
 * Return: n(success)
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
	{
		m = m * -1;
		_putchar(m);
	}
	_putchar(m);
	return (m);
}
