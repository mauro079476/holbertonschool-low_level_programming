#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function as a parameter on each element of an array
 * @size: size
 * @action: action
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array) && (action))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
