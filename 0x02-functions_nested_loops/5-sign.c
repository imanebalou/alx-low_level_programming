#include "main.h"
#include <stdio.h>
/**
 * print_sign - Funcion that prints the sign of a number
 * @n: is the char to be checked
 * Return: 1and print+ if n>0,0 and print0 if n=0,-1 and print- if n<0 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
printf ("+");
}
if (n = 0)
{
return (0);
printf ("0");
}
else
{
return (-1);
printf ("-");
}
}
