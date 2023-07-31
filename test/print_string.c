#include <stdio.h>
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
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	while (*str)
	{
		_putchar(*str);
		str++;
		by_count++;
	}
	return (by_count);
}
