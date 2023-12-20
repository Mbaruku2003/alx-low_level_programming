#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 * Return: void)
 */
void jack_bauer(void)
{
	int c = 58;
	int d;
	int e;
	int k;
	int l;

	for (l = '0'; l <= 9; l++)
	{
		for (k = '0'; k <= '5'; k++)
		{
			for (e = '0'; e <= '3'; e++)
			{
				for (d = '0'; d <= '2'; d++)
				{
					_putchar(d + '0');
					_putchar(e + '0');
					_putchar(c);
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
