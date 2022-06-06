#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	sizeof evaluates the size of a variable
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	printf("Size of char: %zu byte\n", sizeof(char));
	return (0);
}
