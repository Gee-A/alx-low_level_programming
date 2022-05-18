#include "main.h"

/**
 * rev_string - reverse the entered string
 * @s: entered string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, h_len;
	char f_half, l_half;

	i = 0;
	while (s[i] != '\0')
		i++;

	len = i - 1;
	h_len = len / 2;
	while (h_len >= 0)
	{
		f_half = s[len - h_len];
		l_half = s[h_len];
		s[h_len] = f_half;
		s[len - h_len] = l_half;
		h_len--;
	}
}
