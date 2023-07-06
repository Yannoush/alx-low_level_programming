#include "main.h"
/**
 *_pow _recursion - returns the value of x raised
 *to the poower of y
 *@x: value raise
 *@y: power
 *
 *Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
