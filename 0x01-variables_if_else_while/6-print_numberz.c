#include <stdio.h>
/**
 * main - print [0-9]
 * do not use variable type char
 * you can use putchar function only twice.
 *
 * Return: 0, if successful, otherwise return a non-zero
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
