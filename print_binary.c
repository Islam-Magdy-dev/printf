#include "main.h"

/**
 * print_bit - print all bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: void
 */

void print_bit(unsigned int num)
{
	if (num == 0)
	{
		print_char('0');
		return;
	}
	if (num / 2 == 0)
	{
		print_char('1');
		return;
	}
	print_bit(num / 2);
	print_int(num % 2);
}

/**
 * count_bit - count the number of bit in an unsigned integer
 * @num unsigned integer
 *
 * Return: return number of bits
 */

int count_bit(unsigned int num)
{
	int i = 1;

	while (num / 2 != 0)
	{
		num = num / 2;
		i++;
	}
	return (i);
}

/**
 * print_binary - convert an unsigned integer to binary
 * @num: unsigned integer
 *
 * Return: return the number of bytes printed
 */

int print_binary(unsigned int num)
{
	int count;

	print_bit(num);
	count = count_bit(num);

	return (count);
}
