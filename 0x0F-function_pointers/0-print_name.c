#include "function_pointers.h"
/**
 *print_name -  function that prints a name
 *
 *@name: argument to print
 *@f: function pointer to the arg.
 *
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
{
return;
}

f(name);

}
