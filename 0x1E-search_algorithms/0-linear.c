#include <stdio.h>

/**
 * linear_search - returns the first index where value is located
 * @array: array of integers
 * @size: size of array
 * value: value to be linearly sought for in the given array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return -1;
}
