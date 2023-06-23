#include "main.h"

/**
 * print_numbers - Print all digits
 *
 * This function prints all digits from 0-9 to the console.
 */

void print_numbers(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
