#include "variadic_functions.h"
/**
 *print_numbers - function sum all no.
 *
 *@n: numbers of args
 *@separator: the string
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

if (separator == NULL)
{
return;
}

va_start(ap, n);

for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d%s", va_arg(ap, int), separator);
}
else
printf("%d", va_arg(ap, int));
}
printf("\n");
va_end(ap);
}
