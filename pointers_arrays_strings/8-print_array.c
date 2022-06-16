#include "main.h"
#include <stdio.h>
/**
* print_array - print n elements of an array of integers
* @a : string char
* @n : string char
*/
void print_array(int *a, int n)
{

	printf("%d", *a);
		a = a + 1;
	for (; (n - 1) > 0; n--)
	{
		printf(", %d", *a);
			a = a + 1;
	}
	printf("\n");
}
