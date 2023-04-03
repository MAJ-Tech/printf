#include"main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_double - Prints a decimaal in base 10.
 * @s: decimal to be printed.
 * Return: integer number of characters.
 */
int print_double(va_list s)
{
	double num = va_arg(s, double), fractional_part;
	int counter = 0, integer_part = (int)num;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	fractional_part = num - (double)integer_part;

	 if (integer_part == 0)
	 {
		 _putchar('0');
		 counter++;
	 }
	 else
	 {
		 char buffer[20];
		 int i = 0;
		 while (integer_part > 0)
		 {
			 buffer[i++] = '0' + (integer_part % 10);
			 integer_part /= 10;
		 }
		 while (--i >= 0)
		 {
			 _putchar(buffer[i]);
			 counter++;
		 }
	 }
	 if (fractional_part > 0)
	 {
		 int i = 0;
		 _putchar('.');
		 counter++;
	       	 for (; i < 10; i++)
		 {
			 int digit;
			 fractional_part *= 10;
			 digit = (int)fractional_part;
			 _putchar('0' + digit);
			 fractional_part -= digit;
			 counter++;
		 }
	 }
	 return (counter);
}
