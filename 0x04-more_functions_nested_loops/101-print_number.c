#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: param
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_purchar(45);
		i = -1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
