#include "main.h"
/**
 * print_sign - determine the sign of numbers
 * @n: parameter for number
 *
 * Return: 1 if number is greater than 0, -1 if less than 0
 * 0 if number is zero.
 */
int print_sign(int n)
{
	int a;
	char b;

	if (n != 0)
	{
		a = (n > 0) ? 1 : -1;
		b = (a == 1) ? '+' : '-';
	}
	else
		b = (a = 0) + 48;
	_putchar(b);
	return (a);
}
