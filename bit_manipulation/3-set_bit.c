#include "main.h"
/**
 * set_bit - function that sets the value of a bit
 * @n: pointer to number to be chaged
 * @index: bit
 * Return: -1 if error or 1 if succes
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((*n > ULONG_MAX) || (index >= 64))
	return (-1);

	*n |= 1 << index;
return (1);
}
