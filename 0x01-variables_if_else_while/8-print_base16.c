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
int n;
char ch = 'a';
for (n = 48 ; n < 58 ; n++)
	putchar(n);
for (ch = 'a' ; ch <= 'f' ; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
