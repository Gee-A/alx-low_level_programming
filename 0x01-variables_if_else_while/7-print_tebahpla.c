#include <stdio.h>
/**
 * main - print in reverse using putchar
 *
 * Return: 0, if successful, otherwise return a non-zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch != 'a' - 1; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
