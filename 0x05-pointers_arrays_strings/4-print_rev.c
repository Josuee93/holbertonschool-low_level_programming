#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: is the string to reverse
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int i, count;

	while (s[count] != '\0')
		count++;
	for (i = count; i >= s[count]; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
