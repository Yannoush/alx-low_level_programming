#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate a block
 * memory with  malloc and free
 * @ptr: pointe to the memory allocated by malloc
 * @old_size: allocated a old_size to memory for ptr
 * @new_size: allocated a new_size of the new memory block
 *
 * Return: a pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *first_ptr;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	first_ptr = ptr;

	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			pointer1[y] = first_ptr[y];
	}

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			pointer1[y] = first_ptr[y];
	}

	free(ptr);
	return (pointer1);
}

