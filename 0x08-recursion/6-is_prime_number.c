#include "main.h"

int current_prime(int n, int y);

/**
 * is_prime_number - witch cheek of the integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (current_prime(n, n - 1));
}

/**
 * current_prime - calculates if a number is prime using recursive
 * method
 * @n: number to evaluate
 * @y:  is a number of iteration
 *
 * Return: 1 if n is prime, 0 if not
 */
int current_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (current_prime(n, y - 1));
}
