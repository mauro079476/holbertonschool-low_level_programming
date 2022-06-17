#include "main.h"

/**
* _strcat - concatenate two strings
* @src: string char
* @dest: string char
* @n: string
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;

	for (x = 0; dest[x] != 0; x++)
	{
	}
	for (n = 0; src[n] != 0; n++)
	{
		dest[x] = src[n];
	}
return (dest);
}
