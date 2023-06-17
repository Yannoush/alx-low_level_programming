#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print all possible combinations
 * Return: 0
 */
int main(void)
{
	int c;
	for (c = 0; c < 10; c++)
	{
		putchar(c);
		c++;
		putchar(',');
	}
	putchar('\n');
	return (0);
}
