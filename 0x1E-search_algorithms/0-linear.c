#include <stdio.h>

/**
 * linear_search - returns the first index where value is located
 * @array: array of integers
 * @size: size of array
 * @value: value to be linearly sought for in the given array
 * Return: index of value in the array, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = (int)size;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
