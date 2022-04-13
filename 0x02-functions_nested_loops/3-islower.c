#include "main.h"

/**
 * _islower - determine if a character is lowercase
 * @c: character for check
 *
 * Return: 1 if c is lower, otherwise 0
 */

int _islower(int c)
{
	int a;

	a = (c > 97 && c <= 122) ? 1 : 0;
	return (a);
}
