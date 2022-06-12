#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{

	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}

	_putchar('\n');
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char l;

	for (l = 0; l < 10; l++)
	{
		print_alphabet();
	}
}
