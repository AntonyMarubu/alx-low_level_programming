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
	if (n<0)
        {
                printf("%d is %s\n",n, "negative");
        }
        else if (n>0)
        {
                printf("%d is %s\n",n, "positive");
        }
        else{
                printf("%d is %s\n",n, "zero");
	}
	return (0);
}
