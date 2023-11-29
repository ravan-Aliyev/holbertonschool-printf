#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>

int _printf(const char *format, ...);
int convert_and_print (int x, const char *format);
int check_function(char format, va_list args);
int _putchar(char c);

#endif
