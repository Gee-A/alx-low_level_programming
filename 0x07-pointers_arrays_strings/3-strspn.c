#include "main.h"

/**
 * _strspn - GEts the length of a prefix substring
 * @s: String where substring will look.
 * @accept: Substring of accepted chars
 * Return: length of occurrence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - q) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
