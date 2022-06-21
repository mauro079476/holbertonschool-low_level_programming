#include "main.h"

/**
* _puts_recursion - print a string, followed by a new line
*@s : s char
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar ('\n');
	if (*s)
	{
		_putchar(*s);
			s++;
			_puts_recursion(s);
	}
}
