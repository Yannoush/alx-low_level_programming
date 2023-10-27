#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 *
 * Return: 0 always
 */

char *_strstr(char *haystack, char *needle)
{

	char *I = haystack;
	char *P = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}

		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
