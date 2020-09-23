#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - Prints all natural numbers from n to 98.
 *@n: Value.
 *
 *Return: no return.
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
