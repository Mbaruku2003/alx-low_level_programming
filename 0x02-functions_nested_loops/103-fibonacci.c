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
		for (c = 1; c < 4000000; c++)
		{
			 d = c + c--;
			 if (d % 2 = 0)
			 {
				 printf("%d", d);
				 printf("\n");
			 }
		}
		}
	}
}
