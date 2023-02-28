#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */


    char l_digit[2];
    sprintf(l_digit, "%d", n%10);
    int val = atoi(l_digit);
    if (val > 5)
    {
        printf("Last digit of %d is ", n);
        printf("%d and is greater than 5 \n", val);

    }

    else if (val==0)
    {
        printf("Last digit of %d is ", n);
        printf("%d and is 0 \n", val);
    }

    else if (val < 6 )
    {
        printf("Last digit of %d is ", n);
        printf("%d and is less than 6 and not 0 \n", val);

    }

    return (0);
}
