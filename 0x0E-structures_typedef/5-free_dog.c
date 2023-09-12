#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free all memories allocated to a struct dog
 * @d: pointer need to be free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}

