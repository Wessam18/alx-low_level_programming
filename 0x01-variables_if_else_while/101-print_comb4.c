#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints all possible different combinations of three digits
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
int n, m, e;
	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (e = 50; e < 58; e++)
			{
				if (e > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(e);
					if (n != 55 || m != 56 || e != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');
return (0);
}
