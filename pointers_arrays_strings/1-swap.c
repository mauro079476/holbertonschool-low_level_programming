 #include "main.h"
/**
* swap_int - swap the values of two integers
*@a: a pointer int
*@b: b pointer int
* Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
