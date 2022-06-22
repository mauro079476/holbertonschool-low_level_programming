#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: variable
* Return: 1 if c is a letter, and return 0 if otherwise
*/
int _isalpha(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
