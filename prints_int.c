#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_int - Prints an integer to base 10.
 * @s: integr to be printed.
 * Return: number of characters.
 */
int print_int(va_list s)
{
	int num = va_arg(s, int), i = 0, is_negative = 0, counter = 0;
	char buffer[16];

	if (num == 0)
	{
		_putchar('0');
		counter++;
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num != 0)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}
	if (is_negative)
	{
		_putchar('-');
	}
	while (i > 0)
	{
		_putchar(buffer[--i]);
		counter++;
	}
	return (counter);
}
