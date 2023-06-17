#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * we must print all digit number
 * from 0 to 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
