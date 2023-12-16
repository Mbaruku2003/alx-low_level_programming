#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar('a');
		}
	}
	putchar('\n');
	return (0);
}
