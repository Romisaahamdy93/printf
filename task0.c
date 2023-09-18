#include "main.h"

/**
 * print_char - to print char
 * @args: list of arguments
 *
 * Return: to 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - to print string
 * @args: list of arguments
 *
 * Return: count
 */

int print_string(va_list args)
{
	int count;
	char *str = va_arg(args, char*);

	if (str == NULL)

		str = "(null)";

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}

	return (count);


}

/**
 * print_percent - to print percent
 *
 * Return: to 1
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
