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
	dog_t dog_type;
	dog_t *dog;
	char *new_name, *new_owner;

	dog = malloc(sizeof(dog_type));
	new_name = (char *) malloc(sizeof(*name));
	new_owner = (char *) malloc(sizeof(*owner));

	if (dog == 0 || name == 0 || owner == 0)
		return (0);
	new_name = name;
	new_owner  = owner;
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
