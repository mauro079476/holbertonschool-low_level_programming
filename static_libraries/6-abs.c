#include <stdlib.h>

/**
* _abs - Prints the absolute value of an integer
* @s: integer
* Return: Always s
*/

int _abs(int s)
{
		if (s < 0)
			return (s * -1);
		else
			return (s);
}
