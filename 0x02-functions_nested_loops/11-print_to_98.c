#include "main.h"
/**
 * print_to_98 - Entry Point
 * @n: start point
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		(n < 98) ? n++ : n--;
		printf("98\n");
	}
}
