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
	int e = 0;

	for (a = 1; ; a++)
	{
		for (b = 2; ; b++)
		{
		c = a + b;
	d = c - a;
e = d + c;
for (e = 0; e < 4000000; e++)
{
	if (e % 2 == 0)
	{
		printf("%d", e);
		printf("\n");
	}
}
}
}
}
