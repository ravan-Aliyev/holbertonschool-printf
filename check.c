#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * check_function - check indedifaires.
 * @format: format specifaier
 * @args: arguments.
 *
 * Return: Length of string.
 */
int check_function(char format, va_list args)
{
	int length = 0;
	char *x;

	switch (format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			length++;
			break;
		case 's':
			x = va_arg(args, char *);
			if (x == NULL)
				x = "(null)";
			while (*x)
			{
				_putchar(*x);
				length++;
				x++;
			}
			break;
		case '%':
			_putchar('%');
			length++;
			break;
		case 'd':
			length += convert_and_print(va_arg(args, int), "%d");
			break;
		case 'i':
			length += convert_and_print(va_arg(args, int), "%i");
			break;
		default:
			_putchar('%');
			_putchar(format);
			length += 2;
			break;
	}
	va_end(args);
	return (length);
}
