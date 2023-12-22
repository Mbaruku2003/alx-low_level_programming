#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size - the size of a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int r;
	int g;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (t = size - r; t >= 1; t--)
			{
				_putchar(' ');
			}
			for (g = 1; g <= t; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
