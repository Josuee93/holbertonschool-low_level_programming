#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: one of the values to swap
 * @b: another value to swap
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
