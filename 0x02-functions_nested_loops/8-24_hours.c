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

for (l = 0; l <= 2; l++)
{
for (k = 0; k <= 3; k++)
{
if ((l <= 1 && k <= 9) || (l <= 2 && l <= 3))
{
for (e = 0; e <= 5; e++)
{
for (d = 0; d <= 9; d++)
{
_putchar(l + '0');
_putchar(k + '0');
_putchar(c);
_putchar(e + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
}
}
}
