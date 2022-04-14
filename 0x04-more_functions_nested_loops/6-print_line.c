#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: number of line to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i++ < n)
		_putchar('_');
	_putchar('\n');
}
