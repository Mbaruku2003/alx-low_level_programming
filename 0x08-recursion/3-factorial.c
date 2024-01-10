#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the number we are finding factorial for
 * Return: factorial, -1 if less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
