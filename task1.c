#include "main.h"
/**
 * print_int - prints integers
 * @args: list of arguments
 * Return: numbers of integers printed
 */
int print_int(va_list args)
{
int x;
int exp = 1;
int count = 0;
unsigned int num;
x = va_arg(args, int);
if (x < 0)
{
count = count + _putchar('-');
x = x * -1;
}
else
num = x;
while (num / exp > 9)
exp = exp * 10;
while (exp != 0)
{
count = count + _putchar(num / exp + '0');
num = num % exp;
exp = exp / 10;
}
return (count);
}
/**
 * print_dec - prints decimal numbers
 * @args: list of arguments
 * Return: numbers of decimal numbers printed
 */
int print_dec(va_list args)
{
int x;
int exp = 1;
int count = 0;
unsigned int num;
x = va_arg(args, int);
if (x < 0)
{
_putchar('-');
count++;
x = x * -1;
}
else
num = x;
while (num / exp > 9)
exp = exp * 10;
while (exp != 0)
{
_putchar(num / exp + '0');
count++;
num = num % exp;
exp = exp / 10;
}
return (count);
}
