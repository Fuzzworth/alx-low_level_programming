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
	char *name, *owner, *nil;

	nil = "(nil)";
	if (d != 0)
	{
		(d->name != 0) ? name = d->name : name = nil;
		(d->owner != 0) ? owner = d->owner : owner = nil;
		printf("Name: %s\n", name);
		printf("Age: %f.6\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
