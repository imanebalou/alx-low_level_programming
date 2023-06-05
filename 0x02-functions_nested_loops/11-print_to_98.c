#include "main.h"
/**
 * print_to_98 - unction that prints all natural numbers from n to 98
 * followed by a new line
 */
void print_to_98(int n)
{
for(i = n; i < 99; i++)
{
printf(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
