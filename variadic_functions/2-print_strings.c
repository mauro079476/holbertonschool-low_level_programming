#include "variadic_functions.h"

/**
 *print_strings - function that prints strings
 *@separator: char
 *@n: unsigned int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(k);

	va_start(k, n);

	for (i = 0; i < n;)
	{
		str = va_arg(k, char *);

		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(k);
}

