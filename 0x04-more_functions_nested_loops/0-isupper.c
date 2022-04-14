#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: parameter up for check
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	int a;

	a = (c >= 'A' && c <= 'Z') ? 1 : 0;
	return (a);
}
