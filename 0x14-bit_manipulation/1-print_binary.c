#include "main.h"
#include <math.h>
/**
 * _pow - function calculates base to power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base to power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int  number;
	unsigned int b;

	number = 1;
	for (b = 1; b <= power; b++)
		number += base;
	return (number);
}
/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check, d;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		check = n & d;
		if (check == d)
			{
				f = 1;
				_putchar('1');
			}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
