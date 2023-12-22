#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:  number of times the character '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
