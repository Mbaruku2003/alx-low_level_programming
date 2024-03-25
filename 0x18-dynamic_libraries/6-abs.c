#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @m: character being tested for absolute value
 * Return: 0(success)
 */
int _abs(int m)
{
        int l;

        if (m < 0)
        {
                l = m * -1;
                return (l);
        }
        return (m);
}
