#include "holberton.h"

/**
 * puts_half - Function that prints half of a string
 * @str: string to evaluate
 */

void puts_half(char *str)
{
	int i, len;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
