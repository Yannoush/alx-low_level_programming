#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print number by pair 
 */
int main(void)
{
	int a;
	int b = 0;
	
	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a  && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
