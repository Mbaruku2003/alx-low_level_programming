#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times '_'is to be printed
 * Return: void
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
