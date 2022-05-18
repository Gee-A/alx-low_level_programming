#include "main.h"

/**
 * print_rev - print to stdout the reverse order of a string
 * @s: entered string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
