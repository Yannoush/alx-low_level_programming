#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 for success or 1 for Error
 */

int main(int argc, char *argv[])
{
	int num, x, res;

	int coins[] = { 25, 10, 5, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coins[x])
		{
			res++;
			num -= coins[x];
		}
	}
	printf("%d\n", res);
	return (0);
}
