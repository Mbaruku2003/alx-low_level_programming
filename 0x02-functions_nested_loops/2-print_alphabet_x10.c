#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * return: void
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
			_putchar('\n');
		}
	}
}
