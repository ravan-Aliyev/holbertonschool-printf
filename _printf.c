#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - Print all arguments.
 * @format: string with format.
 *
 * Return: Length of string.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL || (strlen(format) == 1 && *format == '%'))
	{
		exit(98);
	}
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			length += check_function(*(format + 1), args);
			format += 2;
		}
		else
		{
			_putchar(*format);
			length++;
			format++;
		}
	}
	va_end(args);
	return (length);
}
