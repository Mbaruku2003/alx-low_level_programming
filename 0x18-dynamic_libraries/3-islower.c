#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase character
 * @c: character being tested wheather lower
 * Return: 1 (if c is lower), 0 (otherwise)
 */
int _islower(int c)
{

        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        return (0);
}
