#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant integer
 * Return: the sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list mbaruku;
	{
		va_start(mbaruku, n);
		for (i = 0; i < n; i++)
			sum = sum + va_arg(mbaruku, int);
		if (n == 0)
			return (0);
	}
	va_end(mbaruku);
	return (sum);
}
