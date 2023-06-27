#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int test = 0;
	int a;

	while (*s != '\0')
	{
		test++;
		s++;
	}
	s--;
	for (a = test; a > 0; test--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
