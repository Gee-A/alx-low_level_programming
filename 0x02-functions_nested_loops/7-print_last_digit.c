#include "main.h"
/**
 * print_last_digit - print last digit of the input number
 * @n: number
 * Return: last digit of number @n
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	n = ((l >= 0) ? l : l * -1);
	_putchar(n + '0');
	return (n);
}
