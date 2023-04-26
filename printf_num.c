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
	int n, j;

	n = va_arg(args, int);
	if (n == INT_MIN)
	{
		for (j = 0; j < 11; j++)
		{
			_putchar("-2147483648"[j]);
		}
		return (i);
	}
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
	int digit, l, pow_t, j, n, c, num;

	n = va_arg(args, int);
	c = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			c++;
		}
		num = n;
		l = 0;
		while (num != 0)
		{
			num /= 10;
			l++;
		}
		pow_t = 1;
		for (j = 1; j <= l - 1; j++)
			pow_t *= 10;

		for (j = 1; j <= l; j++)
		{
			digit = n / pow_t;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			c++;
			n -= digit * pow_t;
			pow_t /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}

