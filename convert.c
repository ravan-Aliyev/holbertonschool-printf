#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * convert_and_print - converet numbers to string.
 * @x: number.
 * @format: format specifaer.
 *
 * Return: Length of string.
 */
int convert_and_print (int x, const char *format)
{
	char *s;
	int len = 0;
	char *originalPointer;

	s = malloc(sizeof(char) * 100);

	if (s == NULL)
		return (-1);

	sprintf(s, format, x);
	originalPointer = s;

	while (*s)
	{
		_putchar(*s);
		s++;
		len++;
	}
	free(originalPointer);
	return (len);
}
