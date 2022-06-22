#include <stdlib.h>
#include <stdio.h>

/**
*main - argv argc
*@argc: size
*@argv: array
*Return: 0
*/
int main(__attribute__((unused))int argc, char *argv[])
{
	int a1, a2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);

	result = a1 * a2;
	printf("%d\n", result);
	return (0);
}
