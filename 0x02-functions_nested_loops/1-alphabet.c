#include "main.h"
/**
 *print_alphabet - Prints the lowercase
 *alphabet followed by a new line.
 *
 *Description: Prints to the terminal all
 *the lowercase characters from 'a'
 *to 'z', followed by a newline character.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
