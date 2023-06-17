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
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(' ');
	}
	do {
		putchar(c);
		putchar('$');
	}while ( c != '9');
	putchar('\n');
	return (0);
}
