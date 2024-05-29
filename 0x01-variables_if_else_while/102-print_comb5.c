#include <stdio.h>
/**
 * main - Entry point of a program
 * Return: 0(success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 56; c++)
			{
				for (d = 48; d <= 57; d++)
				{
				if (b != d)
				{
					if ((a && b) > (c && d))
					{
						putchar(' ');
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (b == 56)
						{
							continue;
						putchar(',');
						putchar(' ');
						}
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
