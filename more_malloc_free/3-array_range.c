#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* array_range - creates an array of integers.
* @min: int
* @max: int
* Return: int
*/
int *array_range(int min, int max)
{
	int i, s;
	int *j;

	if (min > max)
		return (NULL);

	j = malloc(((max - min) + 1) * (sizeof(int)));

	if (j == NULL)
		return (NULL);

	s = 0;
	for (i = min; i <= max; i++)
	{
		j[s] = i;
		s++;
	}
	return (j);
}
