#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, y, x = 0, z = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
			z++;
	}

	z += ac;

	string = malloc(sizeof(char) * z + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
		{
			string[x] = av[i][y];
			x++;
		}
		if (string[x] == '\0')
		{
			string[x++] = '\0';
		}
	}
	return (string);
}
