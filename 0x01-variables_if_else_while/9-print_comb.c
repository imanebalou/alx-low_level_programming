#include <stdio.h>
/**
 * main - program that prints all possible combinations single-digits numbers
 * numbers must be separated by ,
 * followed by a space
 * Return: 0 Success
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
}
}
