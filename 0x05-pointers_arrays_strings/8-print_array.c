#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer
 * @n: is the number of elements of the array to be printed
 *
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n && i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
