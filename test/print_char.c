#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and err no is set appropriately.
 */
int print_char(char c)
{
	int count;

	count = (write(1, &c, 1));
	if (count)
		return (1);
	return (0);
}
