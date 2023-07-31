#include "main.h"
#include <stdlib.h>

/**
 * count_digit - count the number of digit in a number
 * @num: the number
 *
 * Return: return number of digit printed
 */

int count_digit(int num)
{
	int j = 0;

	while (num / 10 != 0)
	{
		j++;
		num = num / 10;
	}
	return (j + 1);
}

/**
 * print_int - print an integer
 * @num: integer to be printed
 *
 * Return: return the number of digit printed
 */

int print_int(int m)
{
	int *arr, i, by_count = 0, op_count = 0;
	unsigned int num;

	if (m < 0)
	{
		print_char('-');
		num = (-1 * (unsigned int)(m + 1)) + 1;
		op_count++;
	}
	else
		num = m;
	by_count = count_digit(num);
	arr = malloc((by_count + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < by_count; i++)
	{
		arr[i] = num % 10;
		num = num / 10;
	}
	for (i = by_count - 1; i >= 0; i--)
	{
		print_char(arr[i] + '0');
	}
	free(arr);
	return (op_count + by_count);
}
