#include "main.h"

/**
 * print_integer - entry
 * @n: placeholder
 * Return: none
 */

void print_integer(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	if (n >= 10)
	{
		print_integer(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * printf_int - prints int
 * @args: args
 * Return: Always
 */

int printf_int(va_list args)
{
	int n;
	
	n = va_arg(args, int);
	print_integer(n);
	return (0);
}	

/**
 * printf_i - %i
 * @args: args
 * Return: Always
 */

int printf_i(va_list args)
{
	int n;

	n = va_arg(args, int);
	print_integer(n);
	return (0);
}
