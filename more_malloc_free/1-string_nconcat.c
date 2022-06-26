#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @s1: char
* @s2: char
* @n: unsigned int
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, sum, m, l;
	char *p;

	i = 0;
	s = 0;
	m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[s] != '\0')
		s++;
	if (n >= s)
	{
		sum = s + i;
	}
	else if (n < s)
	{
		sum = n + i;
	}
		p = malloc((sum + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
			l = 0;
	for (m = 0; m < i; m++)
	{
		p[l] = s1[m];
		l++;
	}
		i = 0;
	for (m = l; m < sum; m++)
	{
		p[l] = s2[i];
		l++;
		i++;
	}
		p[l] = '\0';
	return (p);
}
