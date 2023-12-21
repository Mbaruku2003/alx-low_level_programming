#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
        int i;

        srand(time(0));
        i = rand() - RAND_MAX / 2;
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
