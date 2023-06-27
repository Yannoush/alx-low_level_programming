#include "main.h"
/**
 * _strcpy - Copies a string to a buffer
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
