#include <stdio.h>
/**
 * main - Prime factors
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i  = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%li\n", i);
	return (0);
}
