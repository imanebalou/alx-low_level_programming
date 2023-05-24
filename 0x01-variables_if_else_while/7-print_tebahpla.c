#include <stdio.h>
/**
 * main - Program that prints the lowercase alphabet in inverse
 * followed by a new line
 * Return: 0 Success
 */
int main(void)
{
int i;
for (i = 122; i > 98; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
