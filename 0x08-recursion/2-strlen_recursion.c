#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer to string params
 * Return: recursive
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
