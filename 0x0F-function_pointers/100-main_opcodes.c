#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: give the number oof arguments
 * @argv: give a array of arguments
 *
 * Return: 0 (for succes)
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	int i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == number_of_bytes - 1)
		{
			printf("%04hhx\n", array[i]);
			break;
		}
		printf("%04hhx", array[i]);
	}
	return (0);
}
