#include "main.h"
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0(successs)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 3)
		{
			printf("fizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	return (0);
}
