#include "main.h"

/**
 * _sqrt_recursion - main fuction
 * @n: int n
 * Return: recursive (int)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramter
 * @i: integer parameter
 * Return: int
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
