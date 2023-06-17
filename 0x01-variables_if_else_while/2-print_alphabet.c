#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * we should print the alphabet in lowercase. and we allowed to use only putchar
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while ( c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

