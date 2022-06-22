#include "main.h"
/**
* _strlen - determines the length of string
*@s: s pointer int
* Return: the length of a string
*/
int _strlen(char *s)
{
	int x;
	int counter = 0;

	for (x = 0; s[x] != '\0'; x++)
		counter++;
return (counter);
}
