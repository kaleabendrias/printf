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
	int n, r, i;

	n = va_arg(args, int);
	i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	if (n == 0)
	{
		_putchar('0');
		i++;
	}
	else
	{
		r = 0;
		while (n != 0)
		{
			r = (r * 10) + (n % 10);
			n /= 10;
		}
		while (r != 0)
		{
			_putchar(r % 10 + '0');
			r /= 10;
			i++;
		}
	}
	return (i);
}
