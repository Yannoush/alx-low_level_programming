#include "main.h"

/**
 * _strcpy - copie the string to src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int y = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; y < i ; y++)
	{
		dest[y] = src[y];
	}
	dest[i] = '\0';
	return (dest);
}
