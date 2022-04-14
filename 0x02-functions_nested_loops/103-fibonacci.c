#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful, else return a non-zero
 */

int main(void)
{
	int i;
	long a, b, sum;

	b = (a = (sum = 0) + 1) + 1;
	for (i = 0; b <= 4000000; i++)
	{
		if (b % 2 == 0)
			sum += b;
		b += a;
		a = b - a;
	}
	printf("%lu\n", sum);
	return (0);
}
