#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: char
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, contador = 0;
	unsigned int rest = 0, n = 1;

	if (b == NULL)
	return (0);

	for (contador = 0; b[contador] != '\0'; contador++)
	{
		if (b[contador] != '0' && b[contador] != '1')
			return (0);
	}

	for (i = contador - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			rest += n;
		n += n;
	}
	return (rest);
}
