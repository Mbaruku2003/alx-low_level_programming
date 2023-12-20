#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints fibbonacci
 * Return: 0(success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	for (a = 1; ; a++)
	{
		for (b = 2; ; b++)
		{
		c = a + b;
		for (d = 1; d < 4000000; d++)
		{
			e = c--;
			d = c + e;
			if (d % 2 == 0)
			{
				printf("%d", d);
				printf("\n");
			}
		}
		}
	}
}
