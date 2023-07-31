#include "main.h"
#include <stdarg.h>

/**
 * print_other_specifier - this function is meant to print other specifer
 * apart from the one specified in the my_printf.c function.
 * @arg: argument of va_list
 * @c: character
 * by_c: bytes count
 *
 * Return: by_c
 */

int print_other_specifier(va_list arg, char c, int by_c)
{
	if (c == 'o')
		by_c += print_octal(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		by_c += print_hexa(va_arg(arg, unsigned int));
	else
		by_c += print_unsigned(va_arg(arg, unsigned int));
	return (by_c);
}
