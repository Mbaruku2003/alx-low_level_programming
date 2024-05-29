#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0(success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49; b <= 56; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (a != b && a != c && b != c)
				{
					if (a < b && a < c && b < c)
					{
					putchar(a);
					putchar(b);
					putchar(c);
					if (b == 56 && c == 57)
						continue;
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
