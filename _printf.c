#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - Implementation of printf function.
 * @format: first argument from list.
 * @...: other arguments in the list of arguments.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, char_counter = 0;
	int (*fun)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '%')
			{
				fun = match_format(&format[i]);
				if (fun == NULL)
					return (-1);
				char_counter += fun(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				char_counter++;
				i++;
			}
		}
		else
		{
			_putchar(format[i++]);
			char_counter++;
		}
	}
	va_end(args);
	return (char_counter);
}
