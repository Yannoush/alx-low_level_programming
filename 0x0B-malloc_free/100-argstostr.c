#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int y = 0;
	int x = 0;
	int z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
			z++;
	}

	z += ac;

	str = malloc(sizeof(char) * z + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
		{
			str[x] = av[i][y];
			x++;
		}

		if (str[x] == '\0')
		{
			str[x++] = '\n';
		}
	}
	return (str);
}
