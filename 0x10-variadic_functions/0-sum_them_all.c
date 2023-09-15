#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all paramters
 * @n: According to the number of paramters in the function
 * @...: According a variable number of paramters for calculate the sum
 *
 * Return: 0, if n == 0 otherwise it should return the sum of paramters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list prog;

	va_start(prog, n);

	for (i = 0; i < n; i++)
	sum += va_arg(prog, int);

	va_end(prog);

	return (sum);
}
