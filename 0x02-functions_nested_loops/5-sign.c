#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: character being tested for printing sign
 * Return: 1 (if n > 0), 0 (if n is zero), -1 (if n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
