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
char ch = 'a';
for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar(ch);
for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
