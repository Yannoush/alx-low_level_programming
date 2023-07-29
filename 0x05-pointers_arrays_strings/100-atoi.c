#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, lon = 0, y = 0, digist = 0;

	while (s[lon] != '\0')
		lon++;

	while (i < lon && y == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i]  >= '0' && s[i] <= '9')
		{
			digist = s[i] - '0';
			if (d % 2)
				digist = -digist;
			n = n * 10 + digist;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			y = 0;
		}
		i++;
	}

	if (y == 0)
		return (0);
	return (n);
}
