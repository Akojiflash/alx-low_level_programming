#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Checks if a randomly generated number is positive, negative,
 * or zero and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive, negative, or zero */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}
