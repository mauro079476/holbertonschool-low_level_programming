#include <stdlib.h>
#include <stdio.h>

/**
*main - argv argc
*@argc: size
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[])
{
	int c = 0;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
