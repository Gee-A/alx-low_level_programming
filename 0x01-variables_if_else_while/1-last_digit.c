#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	printf("Last digit of %d is ", n);
	if (ld > 5)
		printf("%d and is greater than 5\n", ld);
	else if (ld == 0)
		printf("%d and is 0\n", ld);
	else if (ld < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", ld);
	return (0);
}
