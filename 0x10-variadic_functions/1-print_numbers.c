#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - return numbers
 * @separator: prints the caracter between numbers.
 * @n: store the number of integers passsed n the function
 * @...: Varaible number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_numb;

	va_start(print_numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_numb, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(print_numb);
}
