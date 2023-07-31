#include "main.h"
#include <unistd.h>

/**
 * print_char - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, 0 is returned, and err no is set appropriately.
 */
int print_char(char c)
{
	int count;

	count = (write(1, &c, 1));
	if (count == 1)
		return (1);
	return (0);
}
