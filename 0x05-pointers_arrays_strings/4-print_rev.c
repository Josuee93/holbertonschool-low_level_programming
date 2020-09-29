#include "holberton.h"
#include <stdio.h>

void print_rev(char *s)
{
	int i, count;

	while (s[count] != '\0')
		count++;
	for(i = count; i >= s[count]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
