#include <stdio.h>
/**
 * main - Program thats prints all the numbers of base 10 in lowercase
 * followed by a new line
 * Return: 0 Success
 */
int main(void)
{
int i,j;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
