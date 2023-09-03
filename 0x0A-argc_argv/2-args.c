#include <stdio.h>
#include "main.h"

/**
 * main - prints the argc it receives
 * @argc: argc number
 * @argv: argv number
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
