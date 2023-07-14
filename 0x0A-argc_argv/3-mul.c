#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a strings to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i;
	int x;
	int z;
	int j;
	int k;
	int w;

	i = 0;
	x = 0;
	z = 0;
	j = 0;
	k = 0;
	w = 0;

	while (s[j] != '\0')
		j++;

	while (i < j && k == 0)

		if (s[i] == '-')
			++x;
	if (s[i] >= '0' && s[i] <= '9')
	{
		w = s[i] - '0';
		if (x % 2)
			w = -w;
		z = z * 10 + w;
		k = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
	
		k = 0;
	}
	i++;
		if (k == 0)
			return (0);
	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of string arguments passed to the program
 *
 * Return: 0 on success, otherwise a non-zero error code
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return  (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
