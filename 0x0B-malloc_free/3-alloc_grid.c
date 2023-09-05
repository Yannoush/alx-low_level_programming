#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **gird;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gird = malloc(height * sizeof(int *));

	if (gird == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
		gird[x] = malloc(width * sizeof(int));

		if (gird[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gird[x]);

			free(gird);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gird[x][y] = 0;
	}
	return (gird);
}
