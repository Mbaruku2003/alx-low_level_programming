#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints fibbonacci
 * Return: 0(success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = b;
	int d = 0;

	while (a + b < 4000000)
	{
		b = b + a;
		if (b % 2 == 0)
			c = c + b;
		a = c - a;
		d++;
	}
	printf("%d\n", a);
	return (0);
}
