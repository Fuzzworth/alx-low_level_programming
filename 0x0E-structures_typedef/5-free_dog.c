#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - function that frees a struct dog
 *
 * Description: function that frees a struct dog
 *
 * @d: Struct of dog type
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d);
	}
}
