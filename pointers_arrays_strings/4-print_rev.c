#include "main.h"

/**
 * print_rev - print reverse
 *@s : s char
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (; x > 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
