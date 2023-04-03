#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * match_format - Match a format to a suitable function.
 * @type: formater to check and march.
 * Return: A pointer to a print function.
 */
int (*match_format(const char *type))(va_list)
{
	int i = 0;
	print_type s[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_int},
		{"d", print_double},
		{NULL, NULL}
	};
	for (; s[i].type != NULL; i++)
	{
		if (*(s[i].type) == *type)
			break;
	}
	return (s[i].func);
}
