#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The value to check
 *
 * Return: On success 1.
 * 0 if is not a digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
