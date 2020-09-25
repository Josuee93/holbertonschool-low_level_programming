#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: is the integer to print
 *
 * Return: no return.
 */

void print_number(int n)
{
	if (n >= 10)
	{
		_putchar('0' + (n / 10));
	}
	_putchar('0' + (n % 10));
}
