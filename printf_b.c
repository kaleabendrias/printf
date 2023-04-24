#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printf_b - printf function used to print the binary representation
 * of an unsigned int
 * @args: va_list that contains the arguments
 * Return: the number of characters printed
 */

int printf_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	int count = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
	int bit = (num >> i) & 1;

	if (bit || count > 0)
	{
	_putchar(bit ? '1' : '0');
	count+;
	}
	}

	if (count == 0)
	{
	_putchar('0');
	count++;
	}
	return (count);
}
