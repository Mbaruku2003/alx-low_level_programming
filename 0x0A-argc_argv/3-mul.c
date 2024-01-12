#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of multiplication
 * @argc: counts the number of arguenments
 * @argv: the array of string
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int r, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	r = num1 * num2;
	printf("%d\n", r);
	return (0);
}
