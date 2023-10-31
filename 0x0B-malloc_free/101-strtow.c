#include <stdlib.h>
#include "main.h"

/**
 * count_word - function count the numnber of words
 * @s: string to compte
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag = 0;
	int i = 0;
	int y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings(Succes)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **str1, *tmp;

	int i;
	int k = 0;
	int len = 0;
	int words;
	int c = 0;
	int start;
	int end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	str1 = (char **)malloc(sizeof(char *) * (words + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				str1[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	str1 = NULL;

	return (str1);
}
