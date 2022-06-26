#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @width: int
* @height: int
* Return: int
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, p, o;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
		for (o = 0; o < width; o++)
			array[p][o] = 0;
	return (array);
}
