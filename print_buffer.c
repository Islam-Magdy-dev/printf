#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_buffer - use a local buffer of 1024 chars to call the write
 * function as little as possible
 * @str: string
 *
 * Return: return the number of character printed
 */

int print_buffer(char *str)
{
	char *buffer;
	int i = 0;
	int str_len = strlen(str);
	int buf_size = 1024;

	if (str_len > buf_size)
		str_len = buf_size;
	buffer = malloc(sizeof(char) * str_len + 1);
	for (i = 0; i < str_len; i++)
	{
		buffer[i] = str[i];
	}
	write(1, buffer, 1024);
	free(buffer);
	return (str_len);
}
