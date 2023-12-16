#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
