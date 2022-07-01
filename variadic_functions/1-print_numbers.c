#include "variadic_functions.h"
/**
* print_numbers - print_numbers
* @separator: separator
* @n: int
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
		return;
	va_start(ptr, n);
	if (separator == NULL)
	{
		for (; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
		}
		printf("\n");
	}
	else
	{
		if (n == 1)
			printf("%d%s", va_arg(ptr, int), separator);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
		printf("%d", va_arg(ptr, int));
		printf("\n");
	}
}
