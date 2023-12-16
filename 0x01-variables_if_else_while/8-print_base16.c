#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	char b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
