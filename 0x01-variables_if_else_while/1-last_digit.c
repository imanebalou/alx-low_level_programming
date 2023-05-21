#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit of a randomly generated number 
 * and whether it is greater than 5, less than 6, or 0
 * Return: (0) Success
 */
int main(void)
{
int n;
int L;
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
if (L > 5)
{
printf("Last digit of %d is %d and is greater than 5",n,L);
}
else if (L < 6 & L != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0",n,L);
}
else
{
printf("Last digit of %d is %d and is 0",n,L);
}
return (0);
}
