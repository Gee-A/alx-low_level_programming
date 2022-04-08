#include <stdio.h>
/**
 * main - print all possible combination of single digit number
 * number should be separated by ',' and printed in ascending order
 *
 * Return: 0 if successful, else non-zero
 */
int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
