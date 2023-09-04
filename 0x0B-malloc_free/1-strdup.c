#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *array_strdup;
	int i = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	array_strdup = malloc((i + 1) * sizeof(char));

			if (array_strdup == NULL)
			return (NULL);
			for (; str[r]; r++)
			array_strdup[r] = str[r];

			return (array_strdup);
}
