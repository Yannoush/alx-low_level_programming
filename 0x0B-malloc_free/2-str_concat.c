#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 * @s1: first strings
 * @s2: second strings
 *
 * Return: result of two string concatenate
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	int i, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	y = 0;
	while (s2[2] != '\0')
		y++;

	s3 = malloc(sizeof(char) * (i + y + 1));

	if (s3 == NULL)
		return (NULL);

	i = y = 0;

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[y] != '\0')
	{
		s3[i] = s2[y];
		i++;
		y++;
	}

	s3[i] = '\0';

	return (s3);
}
