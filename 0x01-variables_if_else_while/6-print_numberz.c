#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
* main - prints all single digit numbers of base 10 starting from 0
*
* followed by a new line, using putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
