#include "main.h"

/**
 * print_most_numbers - Print all digits except 2 and 4
 *
 * This function prints all digits from 0-9 except for 2 and 4 to the console.
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if(!(c == 50 || c == 52))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
