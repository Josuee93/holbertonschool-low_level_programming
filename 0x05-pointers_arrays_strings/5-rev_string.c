#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: is the string to reverse
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int length, i, last_pos;
	char temp[] = "";

	while (s[length] != '\0')
		length++;

	last_pos = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		*temp = s[i];
		s[i] = s[last_pos - i];
		s[last_pos - i] = *temp;
	}
}
