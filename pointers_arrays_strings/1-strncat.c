#include "main.h"

/**
* _strncat - concatenate two strings
* @src: string char
* @dest: string char
* @n: string
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int i;

	if (dest[0] != 0 && src[0] != 0)
	{

		for (x = 0; dest[x] != 0; x++)
		{
		}
		for (i = 0; i < n; i++)
		{
			dest[x] = src[i];
				x++;
		}
	}
return (dest);
}
