#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func && strlen(argv[2]) != 1)
	{
		printf("Error\n");
			exit (99);
	}
	{
	printf ("Error\n");
	exit(100);
	}
	result = func(arg1, arg2);
	printf ("%d\n", result);
	return (0);
}
