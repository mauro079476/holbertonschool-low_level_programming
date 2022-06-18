#include "main.h"

/**
* _strcmp - compares two strings.
* @s2: string
* @s1: string
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] || s2[m]; m++)
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	}
	return (0);
}
