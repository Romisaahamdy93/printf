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
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	rot = va_arg(args, char*);

	if (rot == NULL)
		rot = "(null)";
	return(-1);


	for (x = 0; rot[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (rot[x] == a[y])
			{
			_putchar(b[y]);
			count++;
			break;
			}
		}
	}
	return (count);
}
