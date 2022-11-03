#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted unique array
 * @array: array of integers
 * @size: size of the array
 * @value: value sought for in the array
 * Return: index of soughted value in the array, -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int mid = (int)size / 2;
	int right = (int)size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (right + left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
