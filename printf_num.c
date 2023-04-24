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
	int n, count, temp, digits, pow_t, i, digit;

	n = va_arg(args, int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	temp = n;
	digits = 0;
	while (temp > 0)
	{
		digits++;
		temp /= 10;
	}
	pow_t = 1;
	for (i = 0; i < digits - 1; i++)
		pow_t *= 10;
	while (pow_t > 0)
	{
		digit = n / pow_t;
		_putchar('0' + digit);
		count++;
		n -= digit * pow_t;
		pow_t /= 10;
	}
	return (count);
}
