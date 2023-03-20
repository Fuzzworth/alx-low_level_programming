#include <stdio.h>
#include "dog.h"


/**
 * print_dog - function that prints a struct dog
 *
 * Description: function that prints a struct dog
 *
 * @d: Struct of dog type
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *nil;

	nil = "(nil)";
	if (d != 0)
	{
		(d->name == 0) ? d->name = nil: ;
		(d->owner == 0) ? d->owner = nil: ;
		printf("Name: %s\n", d->name);
		printf("Age: %f.6\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
