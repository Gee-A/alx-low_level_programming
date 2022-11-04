#include <stdio.h>

/**
 * recursive_binary - searches for a value in an array of integers using
 * recursion
 * @array: pointer to the first element in the array
 * @lo: index of the low bound
 * @hi: index of the high bound
 * @value: value to look for
 *
 * Return: the index of the found value, or -1 if not found
 */
int recursive_binary(int *array, size_t lo, size_t hi, int value)
{
	int mid = 0;
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i < hi; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	mid = (lo + hi) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (hi == lo)
		return (-1);
	else if (array[mid] >= value)
		return (recursive_binary(array, lo, mid, value));
	else if (array[mid] < value)
		return (recursive_binary(array, mid + 1, hi, value));
	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
