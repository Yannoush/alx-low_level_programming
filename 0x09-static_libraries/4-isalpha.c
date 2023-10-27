#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character we check
 *
 * Return: 1 if it's a letter or 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
