#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int array_1, y, x;

	array_1 = 0;
	x = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			array_1 = 0;
		else if (array_1 == 0)
		{
			array_1 = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array_2, *array_3;
	int i, k = 0, L = 0, w, y = 0, st, nd;

	while (*(str + L))
		L++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	array_2 = (char **) malloc(sizeof(char *) * (w + 1));
	if (array_2 == NULL)
		return (NULL);

	for (i = 0; i <= L; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (y)
			{
				nd = i;
				array_3 = (char *) malloc(sizeof(char) * (y + 1));
				if (array_3 == NULL)
					return (NULL);
				while (st < nd)
					*array_3++ = str[st++];
				*array_3 = '\0';
				array_2[k] = array_3 - y;
				k++;
				y = 0;
			}
		}
		else if (y++ == 0)
			st = i;
	}

	array_2[k] = NULL;

	return (array_2);
}

