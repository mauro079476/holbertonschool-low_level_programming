#include "main.h"

/**
 * print_rev - print reverse
 *@s : s char
 */
void print_rev(char *s)
{
	int x, i;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	i = (x - 1);

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
