#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
