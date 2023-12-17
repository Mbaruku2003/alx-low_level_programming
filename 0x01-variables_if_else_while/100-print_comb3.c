#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0(success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			if (a == 56 && b == 57)
				continue;
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	return (0);
}
