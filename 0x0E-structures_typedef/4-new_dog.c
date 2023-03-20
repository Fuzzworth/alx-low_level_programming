#include <stdlib.h>
#include <string.h>
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
	char *nn, *no;

	dog = malloc(sizeof(dog_type));

	if (dog == 0)
		return (0);

	nn = (char *) malloc(sizeof(name));
	no = (char *) malloc(sizeof(owner));

	if (nn == 0 || no == 0)
		return (0);

	strcpy(nn, name);
	strcpy(no, owner);

	dog->name = (char *) nn;
	dog->owner = (char *) no;
	dog->age = age;

	return (dog);
}
