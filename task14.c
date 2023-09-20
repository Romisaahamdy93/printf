#include "main.h"

/**
 * print_rot13 - to print the rot13'ed string
 * @args: list of arguments
 *
 * Return: to count
 */

int print_rot13(va_list args)
{
	int count = 0;
	int x, y;

	char *rot;
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	rot = va_arg(args, char*);

	if (rot == NULL)
	{
		rot = "(null)";
		for (x = 0; rot[x] != '\0'; x++)
			_putchar(rot[x]);
		count++;
	}
	else
	{

	for (x = 0; rot[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (rot[x] == a[y])
			{
			_putchar(b[y]);
			count++;
			break;
			}
		}
	}
	}
	return (count);
}
