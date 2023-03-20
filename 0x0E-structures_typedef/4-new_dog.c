#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - function that creates a new dog
 *
 * Description: function that creates a new dog
 *
 * @name: string name
 * @age: float for age
 * @owner: string owner
 *
 * Return: dog_t or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t dog_type;
	dog_t *dog;

	dog = malloc(sizeof(dog_type));

	if (dog == 0)
		return (0);
	if (name == 0)
		return (0);
	if (owner == 0)
		return (0);
	new_owner = owner;
	new_name = name;
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
