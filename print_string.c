#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_string - Print a string.
 * @s: string to be printed.
 * Return: i (Number of characters printed.
 */

int print_string(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char*);

	if (str == NULL)
		str = "(nill)";

	while (*str)
	{
		_putchar(*str++);
		i++;
	}
	return (i);
}
