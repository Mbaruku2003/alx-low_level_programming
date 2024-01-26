#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguenments pssed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int checker;

	char *str;
	va_list mbaruku;

	va_start(mbaruku, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(mbaruku, int));
				checker = 0;
				break;
			case 'f':
				printf("%f", va_arg(mbaruku, double));
				checker = 0;
				break;
			case 'c':
				printf("%c", va_arg(mbaruku, int));
				checker = 0;
				break;
			case 's':
				str = va_arg(mbaruku, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				checker = 1;
				break;
		}
		if (format[i + 1] != '\0' && checker == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
