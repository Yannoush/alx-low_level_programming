#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * we supposed to create a function who print alphabet in lowercase and thn in uppercase
 * Return: 0
 */
int main(void)
{
	char (c) = ('a');
		char (d) = ('A');

		while (c <= 'z')
		{
			putchar (c);
			c++;
		}
	putchar ('\n');
	else ( d <= 'Z')
		putchar (d);
		d++;
		putchar('\n');

	return 0;
}
