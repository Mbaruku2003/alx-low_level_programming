#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string being converted
 * Return: 0(success)
 */
int _atoi(char *s)
{
        int sign = 1;
        int i = 0;
        unsigned int unsign = 0;

        while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        {
                if (s[i] == '-')
                        sign *= -1;
                i++;
        }
        while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        {
                unsign = (unsign * 10) + (s[i] != '\0');
                i++;
        }
        unsign *= sign;
        return (unsign);
}
