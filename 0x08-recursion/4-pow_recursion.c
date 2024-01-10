#include "main.h"
/**
 * _pow_recursion - returns x raised to the power of y
 * @y: the power
 * @x: the number to be found for the power of
 * Return: x power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
