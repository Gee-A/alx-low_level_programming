#include "main.h"

/**
 * _puts - prints string followed by anew line to stdout
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
