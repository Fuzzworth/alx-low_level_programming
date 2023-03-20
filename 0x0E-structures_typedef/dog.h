#ifndef DOG_MACRO
#define DOG_MACRO

/**
 * struct dog - puppy stuct
 *
 * Description: puppy struct
 *
 * @name: string name
 * @age: age in float
 * @owner: string owner
 *
 * Return: 0 success
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
