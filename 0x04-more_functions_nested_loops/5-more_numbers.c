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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
			if (j == 57)
			{
				k = j % 10;
				l = j / 10;
				_putchar(l);
				_putchar(k);
			}
		}
		_putchar('\n');
	}
}
