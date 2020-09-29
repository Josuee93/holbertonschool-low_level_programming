#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: is the string to print
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
