#include "main.h"
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0(successs)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", "fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 3)
		{
			printf("%s", "FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	_putchar('\n');
	return (0);
}
