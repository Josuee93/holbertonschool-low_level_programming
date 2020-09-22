#include "holberton.h"
/**
 *_abs - Computes the absolute value of an integer.
 *@n: The value to check.
 *
 *Return: always n.
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
return (n);
}
