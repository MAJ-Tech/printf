#include "main.h"
#include <stdlib.h>

/**
 * print_int - print an integer
 *
 * @arguments: integer
 * Return: Always 0
 */

int print_int(va_list arguments)
{
	int num = va_arg(arguments, int);
	int count = count_digits(num);

	if (num <= 0)
	{
		count += 1;
	}

	print_number(num);

	return (count);
}

/**
 * print_unsigned - print an unsigned integer
 *
 * @arguments: integer
 * Return: Always 0
 */
int print_unsigned(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
	char *str = string_to_base(num, 10, false);

	return (_puts(str));
}
