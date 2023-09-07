#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
/**
 *main - function that multiplay 2 numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: always 0
*/
int main(int argc, char *argv[])
{
int x = 1;
int sum = 0;

if (argc == 1)
{
	printf("0\n");
}
else
{
    while (x < argc)
   { 
        if (atoi(argv[x]) == '\0')
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[x]);
        x++;
   }
   printf("%i\n", sum);
}
return (0);
}
