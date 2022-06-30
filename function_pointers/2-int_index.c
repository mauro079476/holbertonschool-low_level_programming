#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @size: size
 * @array: array
 * @cmp: cmp
 * Return: -1
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
