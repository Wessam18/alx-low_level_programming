#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog -function that initialize a variable of type struct dog
 * @d: variable name
 *
*/
void print_dog(struct dog *d)
{

if (d == NULL)
{
return;
}

printf("Name: %s\n", (d->name) ? (d->name) : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner) ? (d->owner) : "(nil)");
}
