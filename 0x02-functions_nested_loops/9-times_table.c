#include "holberton.h"
/**
 *times_table - Functions that prints the 9 times table.
 *
 *Return: no return.
 */
void times_table(void)
{
	int i, j, k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (k % 10));
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}
