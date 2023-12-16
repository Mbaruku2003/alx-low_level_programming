#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", (n % 10), n);
	}
	if ((n & 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", (n % 10), n);
	}
	if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", (n % 10), n);
	}
	return (0);
}
