#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: counts the arguenmennts passed
 * @argv: the arguenment string in command line
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
