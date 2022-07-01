#include "variadic_functions.h"
#include <stdio.h>
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: unsigned int
* @...:
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; i < n; i++)
	{
		result = result + va_arg(ptr, int);
	}
	va_end(ptr);
	return (result);
}
