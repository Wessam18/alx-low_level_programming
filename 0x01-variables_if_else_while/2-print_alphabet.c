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
srand(time(0));
	n = rand() - RAND_MAX / 2;
for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
