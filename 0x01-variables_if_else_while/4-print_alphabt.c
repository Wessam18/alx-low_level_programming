#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
* main - prints the alphabet in lowercase,
*
* followed by a new line, except q and e
*
* Return: Aways 0 (Sucess)
*
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	char ch = 'a';

	while (ch <= 'z')
	if (ch != 'e' && ch != 'q')
		putchar(ch);
	ch++;
	putchar('\n');
	return (0);
}