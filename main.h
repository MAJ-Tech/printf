#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_type - A struct that contain
 * a char and a pointer to a function.
 * @type: charter.
 * @func: function pointer.
 */

typedef struct print_type
{
	char *type;
	int (*func)(va_list);
} print_type;

int _putchar(char);

int _printf(const char *format, ...);

int print_string(va_list);

int print_char(va_list);

int (*match_format(const char *))(va_list);

#endif
