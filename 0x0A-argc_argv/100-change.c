#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins
 *
 * Usage: ./change cents
 *
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	int coins = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
		printf("0\n");
	else
	{
		if (x / 25)
		{
			coins += (x / 25);
			x %= 25;
		}
		if (x / 10)
		{
			coins += (x / 10);
			x %= 10;
		}
		if (x / 5)
		{
			coins += (x / 5);
			x %= 5;
		}
		if (x / 2)
		{
			coins += (x / 2);
			x %= 2;
		}
		if (x / 1)
		{
			coins += (x / 1);
			x %= (1);
		}
		printf("%i\n", coins);
	}
	return (0);
}
