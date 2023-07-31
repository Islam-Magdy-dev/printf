#include "main.h"

/**
 * print_hexa_bit_lower - print all bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: void
 */

void print_hexa_bit_lower(unsigned int num)
{
	if (num == 0)
	{
		print_int(num);
		return;
	}
	if (num / 16 == 0)
	{
		if (num == 15)
			print_char('f');
		else
			print_int(num);
		return;
	}
	print_hexa_bit_lower(num / 16);
	switch (num % 16)
	{
		case 10:
			print_char('a');
			break;
		case 11:
			print_char('b');
			break;
		case 12:
			print_char('c');
			break;
		case 13:
			print_char('d');
			break;
		case 14:
			print_char('e');
			break;
		case 15:
			print_char('f');
			break;
		default:
			print_int(num % 16);
			break;
	}
}

/**
 * print_hexa_lower - convert an unsigned integer to hexadecimal
 * @num: unsigned integer
 *
 * Return: return the number of bytes printed
 */

int print_hexa_lower(unsigned int num)
{
	int count;

	print_hexa_bit_lower(num);
	count = count_hexa_bit(num);

	return (count);
}
