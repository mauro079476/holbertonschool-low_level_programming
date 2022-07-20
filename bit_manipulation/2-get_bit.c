#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: bit
 * Return: value of the bit	at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int rest = 0;

	if (index > 64)
		return (-1);

	rest = (n >> index) & 1;

	return (rest);
}
