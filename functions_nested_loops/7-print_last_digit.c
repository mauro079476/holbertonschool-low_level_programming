#include "main.h"

/**
*print_last_digit - print the last digit of a number
*@n:
*Return: 0
*/

int print_last_digit(int n)
{
		int p;

		if (n < 0)
		{
			p = (-1 * (n % 10));
				_putchar(p + '0');
		}
		else
		{
			p = (n % 10);
				_putchar(p + '0');
		}
		return (p);
}
