#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check_num - check if the string there are digit
 * @str: Always str
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/**
 * main - print program name
 * @argc: Count arg
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;
	int str_chge_int;
	int sum = 0;

	counter = 1;

	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_chge_int = atoi(argv[counter]);

			sum += str_chge_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);

	return (0);
}
