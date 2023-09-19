#include "main.h"
/**
 * print_rev - prints the reversed string
 * @args: list of arguments
 * Return: the reversed string
 */
int print_rev(va_list args)
{
char *rev;
int x, y;
rev = va_arg(args, char *);
if (rev == NULL)
rev = "(null)";
for (y = 0; rev[y] != '\0'; y++)
;
for (x = y - 1; x >= 0; x--)
{
_putchar(rev[x]);
}
return (y);
}
