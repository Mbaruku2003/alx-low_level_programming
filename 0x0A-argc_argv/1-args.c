#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: counts the number of arguenments
 * @argv: string for the command line arguenment
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
