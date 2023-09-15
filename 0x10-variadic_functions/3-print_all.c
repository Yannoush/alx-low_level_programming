#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - retrun all arguments
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *space = "";

	va_list arg_list;

	va_start(arg_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(arg_list, int));
					break;

				case 'i':
					printf("%s%d", space, va_arg(arg_list, int));
					break;

				case 'f':
					printf("%s%f", space, va_arg(arg_list, double));
					break;

				case 's':
					str = va_arg(arg_list, char*);
					if (!str)
						str = "nil)";
					printf("%s%s", space, str);
					break;

				default:
					i++;
					continue;
			}
			space = ",";
			i++;
		}
	}
	printf("\n");
	va_end(arg_list);
}
