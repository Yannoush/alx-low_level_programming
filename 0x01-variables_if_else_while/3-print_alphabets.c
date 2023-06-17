#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * we supposed to create a function who print alphabet in lowercase and in uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		c = 'A';
		
		while (c <= 'Z')
	       {
		       putchar (c);
		       c++;
	       }
	       putchar('\n');
	       return 0;
}
