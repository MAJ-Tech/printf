#include "main.h"
#include <stdarg.h>
/**
 * print_char - Print a character.
 * @s: character to be printed.
 * Return: 1 (Success) -1 (unsuccess).
 */

int print_char(va_list s)
{
	char character = (char)va_arg(s, int);

	_putchar(character);
	return (1);
}
