#include "main.h"

/**
* _strcmp - compares two strings.
* @n: string
* @a: string
*/
void reverse_array(int *a, int n)
{
	int i, temp, s;

	s = n - 1;

	for (i = 0; i < n / 2; i++)
				{
				temp = a[i];
				a[i] = a[s];
				a[s] = temp;
				s--;
				}
}
