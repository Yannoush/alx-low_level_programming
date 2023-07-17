#include <stdio.h>
/**
 * main - print the number of arguments passed to
 * the program
 * @argc: numberof arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}