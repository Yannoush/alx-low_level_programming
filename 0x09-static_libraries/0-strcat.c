#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: char array pointer to resulting concatenated string
 * @src: char array pointer to string to concatenate
 * Return: char pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
