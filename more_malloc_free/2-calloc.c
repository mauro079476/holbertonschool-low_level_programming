#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, l;
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = malloc(nmemb * size * sizeof(char));
	if (d == NULL)
		return (NULL);
	l = 0;
	l = nmemb * size;
	for (i = 0; i < l; i++)
	{
	d[i] = 0;
	}
	return (d);
}
