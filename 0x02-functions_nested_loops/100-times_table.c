#include "main.h"
/**
 * print_times_table - print times table of any entry less than 15
 * @n: requested parameter
 *
 * Return: void, print times table.
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	int row, col, product;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

			if (col == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
