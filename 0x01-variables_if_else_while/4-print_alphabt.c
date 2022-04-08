#include <stdio.h>
/**
 * main - Manipulations alphabet
 *
 * Return: 0, if successful, else otherwise
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
