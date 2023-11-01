#include "main.h"
#include <stdio.h>

/**
 * main - Prints the programm name's
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
