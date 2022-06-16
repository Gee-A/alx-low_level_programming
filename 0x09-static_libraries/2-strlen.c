#include "main.h"

/**
 * _strlen - Determine the length of a string
 * @s: entered string
 *
 * Return: length in digit
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
