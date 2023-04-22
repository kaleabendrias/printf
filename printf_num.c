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
		_putchar('_');
		n = -n;
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
	int n, num, l, d, i, e;

	i = 0;
	e = 1;
	n = va_arg(args, int);
	l = n % 10;
	n = n / 10;
	num = n;
	if (l < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
		num = n;
		while (e > 0)
		{
			d = num / e;
			_putchar(d + '0');
			num = num - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l +'0');
	return (i);
}
