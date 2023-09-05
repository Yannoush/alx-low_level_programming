#include <stdlib.h>
#include "main.h"

/**
 * counter_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int counter_word(char *s)
{
	int drap, i, y;

	drap = 0;
	i = 0;
	y = 0;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '0')
			drap = 0;
		else if (drap == 0)
		{
			drap = 1;
			y++;
		}
	}
	return (y);
}

/**
 * **strtow - string to split  into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array_str, *tmp;

	int i, y, lenght, word, z, start, end;

	while (*(str + lenght))
		lenght++;

	word = counter_word(str);
	if (word == 0)
		return (NULL);

	array_str = (char **) malloc(sizeof(char *) * (word + 1));
	if (array_str == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
	{
		if (str[i] == '0' || str[i] == '\0')
		{
			if (z)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp = '\0';

				array_str[y] = tmp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = i;
	}
	array_str[y] = NULL;

	return (array_str);
}

