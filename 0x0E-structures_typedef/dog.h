#include <stdio.h>
#include "main.h"

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *my_dog ( char *name, float age, char *owner)
{
struct dog *my_dog;
my_dog = malloc(sizeof(struct dog));
if (my_dog == NULL)
	return (NULL);
	my_dog.name = name;
	my_dog.age = age;
	my.dog.owner = owner;
	return my_dog;
}
