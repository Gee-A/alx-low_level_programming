#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *c_str;

	i = j = 0;
	if (s1)
		while (s1[i])
			i++;
	else
		s1 = "";

	if (s2)
		while (s2[j])
			j++;
	else
		s2 = "";
	if (j > n)
		j = n;

	c_str = malloc(sizeof(*c_str) * (i + j + 1));
	if (!c_str)
		return (NULL);

	for (i = 0; s1[i]; i++)
		*(c_str + i) = s1[i];

	for (n = 0; n < j; n++)
		c_str[i + n] = s2[n];
	c_str[i + n] = '\0';

	return (c_str);
}
