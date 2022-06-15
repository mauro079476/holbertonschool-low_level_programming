#include "main.h"
#include <string.h>
/**
 * puts_half - print half of a string
 * @str : str char
 */
void puts_half(char *str)
{
	int x;
	int lenght = strlen(str);

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x >= lenght / 2)
			_putchar(str[x]);
	}
	_putchar('\n');
}
