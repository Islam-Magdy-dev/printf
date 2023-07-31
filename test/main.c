#include "main.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
	int k = _printf("%o\n", 101);
	printf("%o\n", 101);
	_printf("%r\n", "KUNLE");
	_printf("%r\n", NULL);
	_printf("%d\n", k);
	return (0);
}
