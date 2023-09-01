#include "main.h"

int current_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resultin:g of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (current_sqrt_recursion(n, 0));
}

/**
 * current_sqrt_recursion - Calculates the
 * square root of a number using recursion
 * @n: The number for which to calculate the square root
 * @i: The current value being tested as the square root
 *
 * Return: The square root of the number,
 * or -1 if no natural square root exists
 */

int current_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (current_sqrt_recursion(n, i + 1));
}
