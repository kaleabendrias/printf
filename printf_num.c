#include "main.h"

/**
 * printf_int - prints int
 * @args: args
 * Return: Always
 */

int printf_int(va_list args)
{
	int i = 0;
	int d, digit;
	int n;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	d = 1;
	while (n / d >= 10)
	{
		d *= 10;
	}
	while (d > 0)
	{
		digit = n / d;
		_putchar(digit + '0');
		n %= d;
		d /= 10;
		i++;
	}
	return (i);
}

/**
 * printf_i - %i
 * @args: args
 * Return: Always
 */

int printf_i(va_list args)
{
	int n, divisor, digit, i;

	n = va_arg(args, int);
	i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	divisor = 1;
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
		i++;
	}
	return (i);
}
