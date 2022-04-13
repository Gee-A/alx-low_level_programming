#include "main.h"
/**
 * print_alphabet - Entry Point
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
		_putchar(ch++);
	_putchar('\n');
}
