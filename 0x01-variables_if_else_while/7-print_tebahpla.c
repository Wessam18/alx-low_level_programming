#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - entry point
*
* Description - A c program print alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'z';
for (ch = 'z' ; ch >= 'a' ; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
