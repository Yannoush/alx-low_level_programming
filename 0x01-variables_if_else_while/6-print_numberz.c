#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 *we need to write a program 
 *that print number 
 *without using char
 *Return: 0 
 */
int main(void)
{
	int c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
