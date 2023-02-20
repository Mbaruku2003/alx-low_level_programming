# include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != '0') && c <= 'g')
				putchar(c);
			c++;

		}
	putchar('\n');

	return (0);
}
