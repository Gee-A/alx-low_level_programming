#include "main.h"
/**
 * print_square - print a square with '#' depending on @size
 * @size: arguement that determine l and b or square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
