#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate in the new memory
 * @str:  is character (strings)
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *str2;
	int i, y;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		str2[y] = str[y];

	return (str2);
}
