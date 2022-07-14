#include "main.h"
/**
 * largest_number - large of 3 numbers
 * @a: 1 integer
 * @b: 2 integer
 * @c: 3 integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b) && (a >= c))
	{
		largest = a;
	}
	else if ((b >= a) && (b >= c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}

