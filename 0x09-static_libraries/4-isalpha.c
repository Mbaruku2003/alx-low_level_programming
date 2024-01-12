#include "main.h"
#include <stdio.h>
/**
 * _isalpha -  checks for alphabetic character
 * @c:character being tested wheather lower or upper
 * Return: 1 (if c is a letter), 0 (if otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
