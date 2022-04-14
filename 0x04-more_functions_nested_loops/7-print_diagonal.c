#include "main.h"
/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: argument that determines length
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		if (i != 0)
			_putchar('\\');
		_putchar('\n');
	}
}
