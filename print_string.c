#include <stddef.h>
#include "main.h"

/**
 * print_string - print a string
 * @str: string
 *
 * Return: return the number of character printed
 */

int print_string(char *str)
{
	int by_count = 0;

	if (str == NULL)
	{
		print_char('(');
		print_char('n');
		print_char('u');
		print_char('l');
		print_char('l');
		print_char(')');
		return (6);
	}
	while (*str)
	{
		print_char(*str);
		str++;
		by_count++;
	}
	return (by_count);
}
