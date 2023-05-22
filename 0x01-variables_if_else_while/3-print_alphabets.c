#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 * Return: (0) Success
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alph[i]);
}
putchar('\n');
return (0);
}
