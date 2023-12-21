#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
        int i = 0;

        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
        return (0);
}
