#include "main.h"

/**
* _strcat - concatenate two strings
* @src: string char
* @dest: string char
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int x;
	int s;

	for (x = 0; dest[x] != 0; x++)
	{
	}
	for (s = 0; src[s] != 0; s++)
	{
		dest[x] = src[s];
			x++;
	}
	dest[x] = '\0';
return (dest);
}
