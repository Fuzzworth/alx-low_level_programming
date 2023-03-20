#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * Description: function that initialize a variable of type struct dog
 *
 * @d: Struct of dog type
 * @name: string name
 * @age: age float
 * @owner: string owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
