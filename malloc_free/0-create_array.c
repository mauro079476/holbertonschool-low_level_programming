#include "main.h"
#include <stdlib.h>

/**
* create_array -  creates an array of chars
* @size: unsigned int
* @c: char
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char  *pro;

	if (size == 0)
		return ('\0');

	pro = malloc(size * sizeof(char));
	if (pro == NULL)
		return (NULL);

	for (r = 0; r <= size; r++)
		pro[r] = c;
	return (pro);
}
