#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character.
 *@c: The character to evaluate
 *
 *Return: 1 if is a letter, 0 if doesn't.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
