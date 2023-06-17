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
	for (c = 0; c <= 9;)
	{
		putchar(c);
		putchar(',');
		if (c !=9)
		{
			putchar(c);
			c++
		}
	}
	putchar('\n');
	return (0);
}
