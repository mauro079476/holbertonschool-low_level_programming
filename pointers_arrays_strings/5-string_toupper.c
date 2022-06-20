#include "main.h"

/**
* string_toupper -  changes all lowercase letters of a string to uppercase.
*@s: char s
*/
char *string_toupper(char *a)
{
	int s = 0;

while (a[s] != '\0')
	{
	if (a[s] >= 'a' && a[s] <= 'z')
	{
		a[s] = a[s] - 32; }
		s++;
	}
return (a);
}
