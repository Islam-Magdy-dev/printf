#include "main.h"

/**
 * print_octal_bit - print all bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: void
 */

void print_octal_bit(unsigned int num)
{
	if (num == 0)
	{
		print_int(num);
		return;
	}
	if (num / 8 == 0)
	{
		print_int(num);
		return;
	}
	print_octal_bit(num / 8);
	print_int(num % 8);
}

/**
 * count_octal_bit - count the number of bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: return number of bits
 */

int count_octal_bit(unsigned int num)
{
	int i = 1;

	while (num / 8 != 0)
	{
		num = num / 8;
		i++;
	}
	return (i);
}

/**
 * print_octal - convert an unsigned integer to octal
 * @num: unsigned integer
 *
 * Return: return the number of bytes printed
 */

int print_octal(unsigned int num)
{
	int count;

	print_octal_bit(num);
	count = count_octal_bit(num);

	return (count);
}
