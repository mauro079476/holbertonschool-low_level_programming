#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char i;
char ch;
	for (i = 'a'; i <= 'z'; i++)
	for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(i);
	putchar(ch);
}
	putchar('\n');
return (0);
}
