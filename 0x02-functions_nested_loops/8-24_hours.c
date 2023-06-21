#include "main.h"
/**
 * main - main block
 * Write a function that prints every
 * minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
		int b;
		int c;

		for ( b = 0; b < 24; b++)
		{
		       for (c = 0; c < 60; c++)
		       {
	       _putchar(c);
		       }
		       _putchar('\n');
		}
}		
