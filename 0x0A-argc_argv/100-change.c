#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: counts the number of arguenments
 * @argv: the arguenments
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int number, j, result;

	int coins[] = {25, 10,5 , 2, 1};

	if (argc != 2)
	{
		printf ("Error\n");
		return (0);
	}
	number = atoi(argv[1]);
	return (0);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && number >= 0; j++)
	{
		while (number >= coins[j])
		{
			result++;
				number -= coins[j];
		}
	}
	printf("%d\n", result);
}
