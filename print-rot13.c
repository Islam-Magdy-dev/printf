#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* print_rot13 - writes the string in rot13
* @args: macro of args
* Return: Number of characters printed
*/
int print_rot13(va_list args)
{
	char *c = va_arg(args, char *);
	int i = 0, printed_chars = 0;
	char rot;


	if (c == NULL)
		return (write(1, "(null)", 6));

	for (; c[i] != '\0'; i++)
	{
		rot = c[i];
		if (c[i] >= 'a' && c[i] <= 'z')
			rot = (c[i] - 'a' + 13) % 26 + 'a';
		if (c[i] >= 'A' && c[i] <= 'Z')
			rot = (c[i] - 'A' + 13) % 26 + 'A';
		printed_chars += write(1, &rot, 1);
	}
	return (printed_chars);
}
