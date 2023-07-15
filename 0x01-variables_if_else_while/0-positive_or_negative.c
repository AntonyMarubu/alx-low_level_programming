#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -determine if a random number is negative, positive or zero
 * Return: 0 on success
 */
int main(void)
{
        int n;

        srandom(time(0));
        n = random() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is postive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
