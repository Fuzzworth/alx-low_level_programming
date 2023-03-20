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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
