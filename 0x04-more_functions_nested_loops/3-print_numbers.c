#include "main.h"

/**
 * print_numbers - Print all digits
 *
 * This function prints all digits from 0-9 to the console.
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
