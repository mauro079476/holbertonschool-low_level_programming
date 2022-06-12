#include <stdlib.h>

/**
 * _abs - Prints the absolute value of an integer
 * @n: integer
 * Return: Always 0 (Sucess)
 */

int _abs(int s)
{
		if (s < 0)
			return (s * -1);
		else
			return (s);
}
