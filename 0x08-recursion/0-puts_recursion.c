#include  "main.h"
/**
 * _puts_recursion - print is a function that prints
 * a string followed by a new line
 * @s: is a pointer of character
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
