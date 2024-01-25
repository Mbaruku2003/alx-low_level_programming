#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed in between numbers
 * @n: number of integers to be passed to the function
 * Return: void(success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int leonard;

	va_list mbaruku;
	{
		va_start(mbaruku, n);
		for (i = 0; i < n; i++)
		{
			leonard = va_arg(mbaruku, int);
			printf("%d", leonard);
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(mbaruku);
	printf("\n");
}
