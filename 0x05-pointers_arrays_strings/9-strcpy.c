#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: is the string pointed
 * @src: is the string to copy
 * Return: no return.
 */

char *_strcpy(char *dest, char *src)
{
	int i, flag = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		flag++;
	}
	dest[flag] = src[flag];
	return (dest);
}
