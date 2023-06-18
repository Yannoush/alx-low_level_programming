#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print 3 number
 * return: 0 
 */
int main(void)
{
	int a;
	int b;
	int c = 2;
	while (c <=9)
	{
		a = 0; b = 1;
		if (a != b && b < a)
		{
			putchar(48 + c);
			putchar(48 + b);
			putchar(48 + a);
			if (a + b + c != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	c++;
		putchar('\n');
	return (0);
}
