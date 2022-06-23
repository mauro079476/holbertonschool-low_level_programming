#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: char
* Return: char
*/
char *_strdup(char *str)
{
	char *arr;
	int len, i;

	if (str == NULL)
		return('\0');
	for (len = 0; str[len]; len++)
	{
	}
	arr = malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = str[i];
	return (arr);
}
