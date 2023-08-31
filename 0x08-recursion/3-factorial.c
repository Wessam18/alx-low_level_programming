#include "main.h"
/**
 *factorial - function print factorial number
 *
 *@n: the number
 *
 *Return: (0) if less than zero
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
