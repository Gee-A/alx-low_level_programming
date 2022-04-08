#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: 0 if successful, else return a non-zero
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
