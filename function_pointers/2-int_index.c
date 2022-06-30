#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function as a parameter on each element of an array
 * @size: size
 * @action: action
 * @array: array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((cmp) && (array))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
