#include <stdio.h>
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
	dog_t dog;

	new_name = name;
	new_owner = owner;

	dog = {new_name, age, new_owner};

	return (dog);
}
