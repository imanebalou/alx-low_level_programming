#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of two digits
 * numbers must be separated by ,
 * followed by a space
 * Return: 0 Success
 */
int main(void)
{
int i,j;
for (i = 48; i < 57; i++)
{
for (j = 49; j < 58; i++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
