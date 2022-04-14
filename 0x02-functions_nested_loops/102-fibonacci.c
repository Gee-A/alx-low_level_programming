#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 if successful, else return a non-zero
 */

int main(void)
{
	int i;
	long a, b;

	b = (a = 1) + 1;

	printf("%lu", a);
	for (i = 0; i < 49; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}
	putchar('\n');
	return (0);
}
