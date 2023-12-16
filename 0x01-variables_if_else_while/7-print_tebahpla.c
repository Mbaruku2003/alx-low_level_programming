#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
