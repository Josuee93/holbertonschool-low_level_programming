#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: is the string to reverse
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int i, j, count;

	while (s[count] != '\0')
		count++;

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
