#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsinged int.
 * @b: binary
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int den = 0;
	int i, b_2;

	if (!b)
		return (den);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, b_2 = 1; i >= 0; i--, b_2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			den += b_2;
	}
	return (den);
}
