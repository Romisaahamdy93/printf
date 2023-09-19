#include "main.h"

/**
 * find_op - to find format
 * @format: is a character string
 * @args: list of arguments
 * @ops: array of specifiers
 * Return: the number of characters printed & -1 otherwise
 */
int find_op(const char *format, va_list args, form_t *ops)
{
int count = 0;
int i = 0;
int j;
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
j = 0;
while (ops[j].sp != NULL)
{
if (format[i] == '%')
{
count = count + _putchar('%');
break;
}
else if (*(ops[j].sp) == format[i])
{
count += ops[j].f(args);
if (count == -1)
return (-1);
break;
}
j++;
}
if (ops[j].sp == NULL)
{
count += _putchar('%');
count += _putchar(format[i]);
}
}
else
count += _putchar(format[i]);
i++;
}
return (count);
}

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
{"i", print_int},
{"d", print_dec},
{"r", print_rev},
{NULL, NULL}
};

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

va_start(args, format);

count = find_op(format, args, ops);

va_end(args);
return (count);
}
