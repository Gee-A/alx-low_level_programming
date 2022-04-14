#include <stdio.h>
/**
 * main - find and print the first 98 fibonanci series
 *        using only the standard library
 * Return: 0 if successful, else a non-zero
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2, l;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 0; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}

	l = 100000000000;
	j1 = j / l;
	j2 = j % l;
	k1 = k / l;
	k2 = k % l;

	for (i = 91; i < 98; ++i)
	{
		printf(", %lu", k1 + (k2 / l));
		printf("%lu", k2 % l);
		k1 += j1;
		j1 = k1 - j1;
		k2 += j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
