#include "main.h"
/**
 * _strlen_recursion - :Returns the
 * lengh of a string.
 * @s: the string to be measured.
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
