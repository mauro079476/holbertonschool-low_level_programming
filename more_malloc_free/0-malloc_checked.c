#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* malloc_checked -  allocate memory using malloc
* @b: int
* Return: a pointer to the memory allocated
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *array;

	array = malloc(b);
	if (array == NULL)
	{
		free(array);
		exit(98);
	}

	return (array);
}
