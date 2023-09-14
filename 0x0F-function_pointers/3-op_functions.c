#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Give a sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Give the difference between two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Substration between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Give multiplication of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return:  product between of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Give the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulo of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The modulo the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
