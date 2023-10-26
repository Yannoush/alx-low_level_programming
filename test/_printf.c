#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - is a function which return any
 * argument we want
 * @format: is a first character of type char
 * @...: accept any parameter
 */

int _printf(const char *format, ...)
{
	int i_looping = 0; 

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i_looping++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				_putchar(*format);
				i_looping++;
			}

			else if  (*format == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				i_looping++;
			}

			else if  (*format == 's')
			{
				char *str = va_arg(args, char*);
					int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				i_looping++;
				_putchar(*str);
			}
			
			else if (*format == 'd')
			{
				int d = va_arg(args,int);
				_putchar(d);
				i_looping++;
			}

		}
		format++;
	}

	va_end(args);

	return (i_looping++);
}
