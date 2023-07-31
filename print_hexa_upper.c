#include "main.h"

/**
 * print_hexa_bit - print all bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: void
 */

void print_hexa_bit(unsigned int num)
{
	if (num == 0)
	{
		print_int(num);
		return;
	}
	if (num / 16 == 0)
	{
		if (num == 15)
			print_char('F');
		else
			print_int(num);
		return;
	}
	print_hexa_bit(num / 16);
	switch (num % 16)
	{
		case 10:
			print_char('A');
			break;
		case 11:
			print_char('B');
			break;
		case 12:
			print_char('C');
			break;
		case 13:
			print_char('D');
			break;
		case 14:
			print_char('E');
			break;
		case 15:
			print_char('F');
			break;
		default:
			print_int(num % 16);
			break;
	}
}

/**
 * count_hexa_bit - count the number of bit in an unsigned integer
 * @num: unsigned integer
 *
 * Return: return number of bits
 */

int count_hexa_bit(unsigned int num)
{
	int i = 1;

	while (num / 16 != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

/**
 * print_hexa - convert an unsigned integer to hexadecimal
 * @num: unsigned integer
 *
 * Return: return the number of bytes printed
 */

int print_hexa_upper(unsigned int num)
{
	int count;

	print_hexa_bit(num);
	count = count_hexa_bit(num);

	return (count);
}
