#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: On success 1.
 * 0 if is not uppercase character.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
