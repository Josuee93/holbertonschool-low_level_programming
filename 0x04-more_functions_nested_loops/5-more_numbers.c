#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: No return.
 */

void more_numbers(void)
{
	int i, j;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		j++;
	}
}
