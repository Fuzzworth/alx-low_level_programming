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
	dog_t *dog;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
