#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_concat;
	int i, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = y = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[y] != '\0')
		y++;

	ptr_concat = malloc((i + y + 1) * sizeof(char));

	if (ptr_concat == NULL)
		return (NULL);
	i = y = 0;
	while (s1[i] != '\0')
	{
		ptr_concat[i] = s1[i];
		i++;
	}

	while (s2[y] != '\0')
	{
		ptr_concat[i] = s2[y];
		i++;
		y++;
	}
	ptr_concat[i] = '\0';
	return (ptr_concat);
}
