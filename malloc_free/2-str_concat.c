#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* str_concat -  concatenates two strings.
* @s2: char
* @s1: char
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
	int large, i, d;
	char *arr;

	if (s1 != NULL && s2 == NULL)
		large = strlen(s1);
	if (s2 != NULL && s1 == NULL)
		large = strlen(s2);
	if (s1 == NULL && s2 == NULL)
	{
		large = strlen(s1);
		large += strlen(s2);
	}
	arr = malloc((large * sizeof(char)) + 1);
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			arr[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (d = 0; s2[d]; d++, i++)
			arr[i] = s2[d];
	}
		return (arr);
}
