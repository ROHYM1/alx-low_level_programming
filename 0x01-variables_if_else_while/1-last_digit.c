#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines if the value of the random number
 * * generated is positive, zero or negative
 *
 * Return: returns zero ar the end
 */
int main(void)
{
int n, LastDigit;

srand(time(0));

n = rand() - RAND_MAX / 2;

LastDigit = n % 10;

if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (LastDigit == 0)

{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
return (0);

}
