#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int y, w, z, length, j, digit;

	y = 0;
	w = 0;
	z = 0;
	length = 0;
	j = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (y < length && j == 0)
	{
		if (s[y] == '-')
			++w;

		if (s[y] >= '0' && s[y] <= '9')
		{
			digit = s[y] - '0';
			if (w % 2)
				digit = -digit;
			z = z * 10 + digit;
			j = 1;
			if (s[y + 1] < '0' || s[y + 1] > '9')
				break;
			j = 0;
		}
		y++;
	}

	if (j == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

