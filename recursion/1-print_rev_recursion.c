#include "main.h"

/**
* _print_rev_recursion - print a string in reverse.
*@s : s char
*/
void _print_rev_recursion(char *s)
{
	int counter, i;

	if (s[0] == '\0')
		_putchar ('\n');
	if (*s)
	{
		for (counter = 0; s[counter]; counter++)
		{
		}
		i = (counter - 1);
		for (; i >= 0; i--)
		{
			_putchar(s[i]);
		}
}
}
