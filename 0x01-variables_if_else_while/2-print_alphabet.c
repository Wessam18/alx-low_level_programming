#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - prints the alphabet in lowercase,
*followed by a new line
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
