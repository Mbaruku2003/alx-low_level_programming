#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Retuen: 0(success)
 */
int main(void)
{
	int j = 0;
	int k = 1;
	int l = 2;

	while (j < 50)
	{
		if (j == 0)
			printf(", %d", k);
		else if (j == 1)
			printf(", %d", l);
		else
		{
			l = l + k;
			k = l - k;
			printf(", %d", l);
		}
		++j;
	}
	printf("\n");
	return (0);
}
