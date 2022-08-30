#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: the index of the found value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);
	}
	return (-1);
}
