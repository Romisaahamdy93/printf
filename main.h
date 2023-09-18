#ifndef MYHEADERS_H
#define MYHEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct form - is the function to check for format
 * @sp: is the specifier type
 * @f: is the print function to use
 */

typedef struct form
{
	char *sp;
	int (*f)();
}
form_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_S(va_list args);
int print_ptr(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);
#endif
