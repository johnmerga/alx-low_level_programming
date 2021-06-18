#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* check the boolean condition */
if (n > 0)
{
printf("Value of a is positive\n%d\n", n);
}
else if (n < 0)
{
printf("Value of a is negative\n %d \n", n);
}
else
{
printf("it's neutral \n%d\n", n);
}
return (0);
}

