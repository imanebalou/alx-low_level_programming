#include "main.h"
/**
 * _isalpha - Function that check for alphabetic character
 * @c: is the char to be checked
 * Return: 1 if c is a letter lowercase or uppercase, 0 else
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
