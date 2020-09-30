#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string, starting with
 * the first character.
 * @str: is the string to evaluate
 *
 * Return: no return.
 */

void puts2(char *str)
{
	int i, len;

	while(str[len] != '\0')
		len++;

	for (i = 0; i <= len; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
