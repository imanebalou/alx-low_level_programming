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
if (n < 99)
{
for (i = n; i < 99; i++)
{
if (i != 98)
{
printf("%d",i);
_putchar(',');
_putchar(' ');
}
else if (i == 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n >=98)
{
for (j = n; j > 97; j--)
{
if (j != 98)
{
printf("%d", j);
_putchar(',');
_putchar(' ');
}
else if (j == 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
