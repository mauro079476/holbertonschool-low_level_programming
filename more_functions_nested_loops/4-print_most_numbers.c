#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9, dont print 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int f;

		for (f = 0 ; f <= 9 ; f++)
		{
		if (f != 2 &&  f != 4)
		{
			_putchar (f + '0');
		}
		}
				_putchar ('\n');
}
