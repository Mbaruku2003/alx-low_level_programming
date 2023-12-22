#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character being tested
 * Return: 1(if cis uppercase), 0(otherwise)
 */
int _isupper(int c)
{

	if (c == 65 && c <= 90 && c++)
	{
		return (1);
	}
	return (0);
}
