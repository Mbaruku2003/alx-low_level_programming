#include "main.h"
/**
 * prime_i - searches wheather it is a prime number
 * @a: the input
 * @b: the divisor
 * Return: (0);
 */
int prime_i(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_i(a, b + 1));
}
/**
 * is_prime_number - detect if its a prime number
 * @n: the number input
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_i(n, 2));
}
