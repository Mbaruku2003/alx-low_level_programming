#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed betweeen the strings
 * @n: the number of strings to be passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *leo;

	va_list mbaruku;
	{
	va_start(mbaruku, n);
	for (i = 0; i < n; i++)
	{
		leo = va_arg(mbaruku, char *);
		if (leo == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", leo);
		if (i  !=  (n - 1) || separator != NULL)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
			return;
	}
	}
	printf("\n");
	va_end(mbaruku);
}
