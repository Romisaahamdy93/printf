#include "main.h"
/**
 * _printf - print anthing according to format
 * @format: is a character string
 * Return: the number of characters printed & -1 otherwise
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;

form_t ops[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"i", print_int},
{"d", print_int},
{"b", print_binary},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hex},
{"X", print_HEX},
{"S", print_S},
{"p", print_ptr},
{"r", print_rev},
{"R", print_rot13},
{NULL, NULL}
};
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
count = find_op(format, args, ops);
va_end(args);
return (count);
}
