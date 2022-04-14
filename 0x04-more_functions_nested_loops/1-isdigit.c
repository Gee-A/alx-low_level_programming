#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: argument for check
 * Return: 1 if @c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int a;

	a = (c >= '0' && c <= '9') ? 1 : 0;
	return (a);
}
