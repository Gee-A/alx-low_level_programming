#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 if successful, else return a non-zero
 */
int main(void)
{
	int i = 0;

	for (i = i; i < 100; i++)
	{
		if (i % 3 || i % 5)
		{
			if (i % 3)
				printf("Fizz ");
			else if (i % 5)
				printf("Buzz ");
			else
				printf("FizzBuzz ");
		}
		else
			printf("%d ", i)
	}
	printf("Buzz\n");
	return (0);
}
