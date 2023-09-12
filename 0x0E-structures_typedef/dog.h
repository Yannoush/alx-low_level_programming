#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a basic info
 * about dog
 * @name: First structure member
 * @age: Second structure member
 * @owner: last structure member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Define a new type
 * as a new name for the type struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
