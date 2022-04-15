 #include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 if successful, else return a non-zero
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if (i % 3 == 0)
				printf("Fizz ");
			else if (i % 5 == 0)
				printf("Buzz ");
			else
				printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
