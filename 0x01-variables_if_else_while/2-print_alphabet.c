#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * followed by a new line
 * Return: (0) Success
 */
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alph[i]);
}
putchar('\n');
Return (0);
}
