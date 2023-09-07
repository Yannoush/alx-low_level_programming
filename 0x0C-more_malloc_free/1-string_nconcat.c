#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array_s;
	unsigned int i = 0, y = 0, lenght_1 = 0, lenght_2 = 0;

	while (s1 && s1[lenght_1])
		lenght_1++;

	while (s2 && s2[lenght_2])
		lenght_2++;

	if (n < lenght_2)
		array_s = malloc(sizeof(char) * (lenght_1 + n + 1));
	else
		array_s = malloc(sizeof(char) * (lenght_1 + lenght_2 + 1));

	if (!array_s)
		return (NULL);

	while (i < lenght_1)
	{
		array_s[i] = s1[i];
		i++;
	}

	while (n < lenght_2 && i < (lenght_1 + n))
		array_s[i++] = s2[y++];

	while (n >= lenght_2 && i < (lenght_1 + lenght_2))
		array_s[i++] = s2[y++];

	array_s[i] = '\0';

	return (array_s);
}
