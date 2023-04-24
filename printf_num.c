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
	int n, i, j, tmp;

	i = 0;
	n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		i++;
	}
	tmp = 1;
	for (j = 1; j < i; j++)
		tmp *= 10;
	while (tmp)
	{
		_putchar((n / tmp) + '0');
		n %= tmp;
		tmp /= 10;
	}
	return (i);
}

