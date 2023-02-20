#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the programme
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("input not recognised");
	}
	return (0);
}

