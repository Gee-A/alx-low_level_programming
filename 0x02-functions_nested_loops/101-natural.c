#include <stdio.h>

/**
 * main - Entry point
 * Description: compute and print sum of all multiples of 3 and 5
 * below 1024 (excluded)
 *
 * Return: 0 if successful, otherwise return a non-zero
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
