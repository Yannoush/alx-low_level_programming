#include <stdlib.h>
#include "main.h"

/**
 * *array_range - is an array of integers
 * @min: range the minimum  of values stored
 * @max: range the maximum of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
