#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * followed by a new line
 * @n: the natural number
 */
void print_to_98(int n)
{
int i, j;
if (n =< 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d",i);
printf(",");
printf(" ");
}
else if (i == 98)
{
printf(",");
printf(" ");
}
}
}
else if (n >=98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
{
printf("%d", j);
printf(",");
printf(" ");
}
else if (j == 98)
{
printf(",");
printf(" ");
}
}
}
}
