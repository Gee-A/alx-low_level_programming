#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - searches for a key in an array that has been ordered
 * by numerical values assigned to the keys.
 * @array: sorted array of integers
 * @size: size of array
 * @value: value to be sought for in the given array
 *
 * Description: determines the probe position by using an interpolation func
 * if the value is not found, search in a sub array based on if value is lesser
 * or lower.
 *
 * Return: index of value in the array, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0, pos = 0;

	if (!array || size == 0)
		return (-1);

	high = size - 1;
	pos = low + (((double)(high - low) /
				 (array[high] - array[low])) * (value - array[low]));
	if (pos > size - 1)
		printf("Value checked array[%lu] is out of range\n", pos);
	while (high >= low && array[high] >= value && array[low] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
		pos = low + (((double)(high - low) /
					 (array[high] - array[low])) * (value - array[low]));
	}
	return (-1);
}
