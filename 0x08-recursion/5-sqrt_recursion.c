#include "main.h"
/**
 * _sqrt_recursion - get square root of a number.
 * @n: number.
 * Return: (The result)
*/
int _sqrt_recursion(int n)
{
return (_sqrt_recursion(n, 0));
}
/**
 * ft_sqrt_recursion - function get square root.
 * @n: input value to get square root of it.
 * @b: intermediate value.
 * Return: (value).
*/

int ft_sqrt_recursion(int n, int b)
{
if (b * b == n)
{
return (b);
}
else if (b * b > n)
{
return (-1);
}
else
{
return (ft_sqrt_recursion(n, b + 1));
}
}
