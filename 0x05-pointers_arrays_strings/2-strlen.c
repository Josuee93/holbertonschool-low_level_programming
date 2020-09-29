#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: is the string to calculate the length
 *
 * Return: returns i which is the length of the string.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
