#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		putchar(n + '0');
		return;
	}

		print_binary(n >> 1);

	if (((n) & (1)) == 1)
		putchar('1');

	else
		putchar('0');
}
