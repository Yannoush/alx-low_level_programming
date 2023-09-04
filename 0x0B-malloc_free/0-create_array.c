#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size which hold string  and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size which hold string  and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array_str;
	unsigned int y;

	array_str = malloc(size * sizeof(char));
	if (size == 0 || array_str == 0)
		return (NULL);
	for (y = 0; y < size; y++)
		array_str[y] = c;
	return (array_str);
}
