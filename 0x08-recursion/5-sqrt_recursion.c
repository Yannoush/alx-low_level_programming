#include "main.h"

int current_sqrt_recursion(int n, int y);

/**
 * _sqrt_recursion - returns number the natural square
 * @n: number to calculate the square
 *
 * Return: the resulting square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (current_sqrt_recursion(n, 0));
}

/**
 * current_sqrt_recursion - recurses to find the natural
 * square of number
 * @n: number to calculate the sqaure
 * @y: numbe of iterator
 *
 * Return: the resulting square root
 */
int current_sqrt_recursion(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (current_sqrt_recursion(n, y + 1));
}

