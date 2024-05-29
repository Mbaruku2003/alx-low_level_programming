#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * used to print all arhuenments of command line
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
