#include "main.h"
/**
 *main - function print argumrnt count
 * 
 *@argc: argument counter
 *@argv: argument vector
 *Return: always 0
*/
int main(int argc, char *argv[])
{
(void) argv;

printf("%i\n", argc - 1);
return (0);
}
