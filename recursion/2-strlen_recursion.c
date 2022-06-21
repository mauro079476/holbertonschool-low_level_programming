#include "main.h"

/**
* _strlen_recursion -  returns the length of a string
*@s : s char
* Return: _strlen_recursion
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
