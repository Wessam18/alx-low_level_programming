#include "variadic_functions.h"
/**
 *print_strings - function sum all no.
 *
 *@n: numbers of args
 *@separator: the string
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;

va_start(ap, n);

for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);

if (s == NULL)
{
printf("(nil)");
}
else
printf("%s", s);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
