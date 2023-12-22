#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j);
			if (j > 9)
			{
				k = j % 10;
				l = j / 10;
				_putchar(l + '0');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
