#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: 0 if the two strings are equal, a negative
 * number if s1 is less than s2,
 * or a positive number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != 0 && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
					}
					a++;
					}
					return (0);
					}
