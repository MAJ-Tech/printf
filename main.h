#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>

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

int print_int(va_list arguments)

int _putchar(char);

int _printf(const char *format, ...);

int print_string(va_list);

int print_char(va_list);

int print_int(va_list);

int (*match_format(const char *))(va_list);

char *string_to_base(unsigned long int num, int base, bool uppercase);

int count_digits(int i);

void print_number(int n);

int _puts(char *str);

int print_unsigned(va_list)

#endif
