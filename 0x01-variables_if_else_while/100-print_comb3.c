#include <stdio.h>
/**
 * main - print all possible combinations of two digits
 *
 * Return: 0 if successful, else a non-zero value
 */
int main(void)
{
	int i, e;

	i = e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
					break;
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
