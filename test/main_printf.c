#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string.
 *
 * Description: This function is meant to print a character,
 * string to stdout based on the format string.
 * Return: return the number of characters printed(excluding the
 * null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int by_c = -1;
	int j = 0;

	if (format != NULL)
	{
		va_start(arg, format);
		while (format[j])
		{
			if (format[j] != '%')
			{
				by_c += _putchar(format[j]);
			}
			else
			{
				j++;
				if (format[j] == 'c')
					by_c +=  print_char((char)va_arg(arg, int));
				else if (format[j] == 's')
					by_c += print_string(va_arg(arg, char *));
				else if (format[j] == '%')
					_putchar(format[j]);
				else
				{
					if (format[j] == ' ' || format[j] == '#' || *format == '+')
					{
						by_c++;
					}
					if (by_c == -1)
						return (by_c);
				}
			}
			j++;
		}
		va_end(arg);
	}
	return (by_c);
}
