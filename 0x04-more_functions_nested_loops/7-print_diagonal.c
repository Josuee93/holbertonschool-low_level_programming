#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: is the number of times the character \ should be printed
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else if (i > 0 && i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
