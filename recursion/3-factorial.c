#include "main.h"

/**
* factorial - return  the factorial of a given number.
*@n : n char
* Return: factorial
*/
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
		if (n < 0)
	{
		return (-1);
	}
	return (1);
}
