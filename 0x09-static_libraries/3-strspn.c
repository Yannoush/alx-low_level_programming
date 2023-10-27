#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input value
 *
 * Return: 0 always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int y = 0;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				i++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
